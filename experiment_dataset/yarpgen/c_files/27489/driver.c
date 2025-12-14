#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4175138401U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 4224253918929433970ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)43;
unsigned int var_6 = 2315854450U;
unsigned int var_8 = 4184107103U;
signed char var_9 = (signed char)-25;
int zero = 0;
unsigned long long int var_10 = 4759800575265893302ULL;
unsigned long long int var_11 = 10057300467728370722ULL;
unsigned short var_12 = (unsigned short)7126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
