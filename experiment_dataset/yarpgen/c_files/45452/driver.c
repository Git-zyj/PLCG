#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14729789542305759694ULL;
unsigned long long int var_4 = 4172165039652446339ULL;
unsigned int var_8 = 673362553U;
signed char var_11 = (signed char)21;
int zero = 0;
signed char var_12 = (signed char)-2;
int var_13 = 1282802142;
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
