#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 673276563882177262ULL;
short var_1 = (short)-4529;
unsigned long long int var_2 = 14883319445194808230ULL;
unsigned char var_3 = (unsigned char)62;
unsigned short var_4 = (unsigned short)14348;
short var_8 = (short)-23097;
unsigned long long int var_9 = 16408047021061846831ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4816788419269918266ULL;
long long int var_12 = 4943737359929084806LL;
unsigned short var_13 = (unsigned short)64152;
int var_15 = -155657029;
short var_16 = (short)-11068;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1152283871;
signed char var_19 = (signed char)-61;
short var_20 = (short)-28809;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
