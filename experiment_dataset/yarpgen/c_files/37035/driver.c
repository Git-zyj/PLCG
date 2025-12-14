#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1695684340;
int var_2 = 1560169954;
signed char var_4 = (signed char)-60;
unsigned int var_8 = 3477708077U;
unsigned short var_10 = (unsigned short)27604;
unsigned short var_11 = (unsigned short)49068;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int var_18 = 911560749;
void init() {
}

void checksum() {
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
