#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1614470675;
unsigned short var_4 = (unsigned short)60484;
long long int var_7 = 8080300521387929224LL;
signed char var_8 = (signed char)-115;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15850533790575339698ULL;
unsigned int var_13 = 1880580566U;
unsigned int var_14 = 1163284742U;
long long int var_16 = -3818975185692882178LL;
int var_17 = 1770178782;
int zero = 0;
long long int var_18 = -2156188214290980758LL;
unsigned long long int var_19 = 15267180634184718619ULL;
void init() {
}

void checksum() {
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
