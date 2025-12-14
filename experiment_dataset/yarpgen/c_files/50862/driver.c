#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8976806076776000799LL;
long long int var_2 = -8796066354203613156LL;
unsigned int var_3 = 3408707845U;
unsigned long long int var_4 = 5383278564541703464ULL;
unsigned long long int var_5 = 13838113618574056665ULL;
signed char var_6 = (signed char)125;
long long int var_8 = 8930679048647432779LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 5950697395179717585ULL;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1941917406U;
int zero = 0;
unsigned long long int var_16 = 16460242889401792873ULL;
unsigned char var_17 = (unsigned char)213;
unsigned int var_18 = 1523685663U;
unsigned char var_19 = (unsigned char)90;
unsigned long long int var_20 = 919421465095644849ULL;
unsigned short var_21 = (unsigned short)61709;
signed char var_22 = (signed char)87;
int var_23 = -159199035;
signed char var_24 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
