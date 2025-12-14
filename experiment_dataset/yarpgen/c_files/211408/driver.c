#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1320450417U;
unsigned char var_2 = (unsigned char)22;
signed char var_3 = (signed char)-5;
unsigned long long int var_4 = 7701751156434713337ULL;
unsigned short var_6 = (unsigned short)9437;
unsigned short var_7 = (unsigned short)12412;
signed char var_9 = (signed char)-16;
int zero = 0;
unsigned int var_10 = 1068278497U;
unsigned int var_11 = 1083986258U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
