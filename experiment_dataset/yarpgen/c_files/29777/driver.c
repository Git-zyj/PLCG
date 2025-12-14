#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1896338023;
long long int var_1 = 1676269141228380419LL;
unsigned long long int var_2 = 17249315494017421442ULL;
int var_8 = -771939689;
unsigned int var_11 = 149399910U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)114;
unsigned short var_14 = (unsigned short)64389;
_Bool var_15 = (_Bool)0;
int var_16 = -2112293832;
unsigned long long int var_17 = 3233240321853209096ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
