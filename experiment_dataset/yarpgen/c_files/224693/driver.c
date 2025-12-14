#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
int var_2 = -2086558244;
unsigned int var_5 = 3125659233U;
unsigned long long int var_6 = 15121479198773753778ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 3666710294586612159ULL;
int var_11 = -1435546181;
int var_13 = 899117311;
unsigned char var_14 = (unsigned char)192;
unsigned int var_16 = 618112032U;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 1390395814;
unsigned char var_20 = (unsigned char)94;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1731149092U;
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
