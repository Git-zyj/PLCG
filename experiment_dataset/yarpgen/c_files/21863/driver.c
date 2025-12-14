#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
signed char var_1 = (signed char)47;
unsigned int var_4 = 2642081245U;
unsigned int var_5 = 173506219U;
unsigned short var_6 = (unsigned short)49684;
long long int var_8 = 1305435049056672861LL;
signed char var_9 = (signed char)6;
int zero = 0;
unsigned long long int var_12 = 9055163531333531251ULL;
unsigned long long int var_13 = 10753034283309319863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
