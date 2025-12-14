#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 16446124746941056044ULL;
unsigned int var_5 = 3748071382U;
unsigned long long int var_7 = 3326242096302050809ULL;
unsigned long long int var_8 = 17316860188797199395ULL;
unsigned int var_9 = 2688789436U;
short var_10 = (short)-21802;
short var_12 = (short)-31664;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-43;
short var_16 = (short)604;
unsigned short var_17 = (unsigned short)43298;
int zero = 0;
short var_18 = (short)-25001;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)58278;
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
