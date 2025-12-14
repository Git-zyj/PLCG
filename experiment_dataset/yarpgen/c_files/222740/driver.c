#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1452312944U;
signed char var_2 = (signed char)30;
unsigned char var_3 = (unsigned char)83;
signed char var_5 = (signed char)8;
unsigned long long int var_6 = 16269161441764738822ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)119;
unsigned char var_9 = (unsigned char)58;
unsigned int var_10 = 199710787U;
int var_13 = -1026405030;
int zero = 0;
unsigned int var_14 = 1347944329U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-50;
void init() {
}

void checksum() {
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
