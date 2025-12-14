#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)59151;
int var_5 = 672543595;
long long int var_11 = 3459388007120912745LL;
short var_14 = (short)-27912;
int zero = 0;
unsigned short var_15 = (unsigned short)47958;
signed char var_16 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
