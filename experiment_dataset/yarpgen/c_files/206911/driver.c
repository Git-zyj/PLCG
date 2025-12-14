#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-76;
unsigned long long int var_13 = 78288301714555703ULL;
unsigned short var_14 = (unsigned short)12649;
int zero = 0;
unsigned short var_16 = (unsigned short)62035;
int var_17 = 2017715449;
unsigned long long int var_18 = 2802600570467032507ULL;
signed char var_19 = (signed char)-96;
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
