#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 807417883U;
long long int var_7 = 530757465813918453LL;
long long int var_8 = -8574635435919478229LL;
unsigned long long int var_10 = 7757844435830682243ULL;
int var_13 = -1799434969;
int var_14 = 562590665;
signed char var_16 = (signed char)77;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)36459;
unsigned long long int var_22 = 2331405588355855784ULL;
void init() {
}

void checksum() {
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
