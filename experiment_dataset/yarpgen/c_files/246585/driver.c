#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
int var_2 = -560469039;
unsigned short var_3 = (unsigned short)7405;
unsigned long long int var_6 = 247187242381819977ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)122;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2662895258U;
unsigned long long int var_15 = 6669888201273862151ULL;
unsigned long long int var_16 = 10926358806725092271ULL;
long long int var_17 = -4430404803504873591LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
