#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1486742549;
unsigned int var_10 = 3021591925U;
long long int var_11 = 7903773640897862867LL;
int zero = 0;
signed char var_13 = (signed char)110;
unsigned long long int var_14 = 17111836389230842096ULL;
signed char var_15 = (signed char)-33;
unsigned long long int var_16 = 4710329886122784461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
