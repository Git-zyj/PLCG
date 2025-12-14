#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3652015954U;
int var_1 = -370659761;
unsigned long long int var_2 = 5891623108078790431ULL;
unsigned int var_4 = 1320356361U;
unsigned long long int var_5 = 12537730271339660380ULL;
int var_6 = 450144757;
_Bool var_7 = (_Bool)1;
long long int var_8 = -6426326583743171425LL;
unsigned long long int var_9 = 17450056148866159578ULL;
unsigned short var_11 = (unsigned short)22056;
unsigned short var_12 = (unsigned short)10640;
unsigned int var_13 = 3476169U;
unsigned int var_14 = 207859071U;
unsigned long long int var_15 = 10738362605159189300ULL;
unsigned char var_16 = (unsigned char)163;
unsigned short var_17 = (unsigned short)31524;
int zero = 0;
unsigned char var_18 = (unsigned char)62;
long long int var_19 = -2987343387408662578LL;
unsigned char var_20 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
