#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4147339497U;
unsigned char var_3 = (unsigned char)110;
signed char var_8 = (signed char)106;
unsigned long long int var_9 = 7810886916665548350ULL;
unsigned char var_10 = (unsigned char)92;
short var_11 = (short)-9560;
long long int var_12 = 5120157456931373532LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = -673752574;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)68;
signed char var_18 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
