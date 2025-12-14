#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)7729;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)47532;
unsigned int var_14 = 2064624910U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)31;
unsigned char var_18 = (unsigned char)154;
long long int var_19 = 4025670764849801849LL;
void init() {
}

void checksum() {
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
