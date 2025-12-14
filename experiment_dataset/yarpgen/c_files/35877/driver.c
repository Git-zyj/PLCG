#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63979;
unsigned int var_3 = 652993946U;
unsigned long long int var_5 = 1946319889997874782ULL;
unsigned int var_7 = 1036713458U;
unsigned long long int var_8 = 8206971421360407959ULL;
int var_9 = 902726785;
unsigned char var_11 = (unsigned char)173;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)102;
int var_21 = 905793377;
unsigned int var_22 = 2976795228U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
