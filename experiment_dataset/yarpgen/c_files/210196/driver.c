#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1379208478;
int var_1 = -1588944095;
long long int var_2 = -195086780751225619LL;
_Bool var_3 = (_Bool)1;
int var_4 = 1720027710;
unsigned int var_5 = 1344223443U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3609042673U;
unsigned short var_11 = (unsigned short)36947;
unsigned long long int var_12 = 16669220916196995095ULL;
int zero = 0;
long long int var_16 = -55023979535117987LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5663220168649216015LL;
unsigned short var_19 = (unsigned short)60849;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
