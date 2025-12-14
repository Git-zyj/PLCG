#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 220118181506120323ULL;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-118;
long long int var_13 = -7043747755027941607LL;
int zero = 0;
unsigned short var_15 = (unsigned short)46557;
signed char var_16 = (signed char)72;
short var_17 = (short)-16426;
long long int var_18 = -2367423102757812947LL;
unsigned short var_19 = (unsigned short)60728;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
