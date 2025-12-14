#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4412982965271185026ULL;
signed char var_2 = (signed char)113;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14733684361681940370ULL;
signed char var_5 = (signed char)117;
signed char var_8 = (signed char)24;
unsigned short var_9 = (unsigned short)25625;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)51832;
unsigned short var_15 = (unsigned short)50159;
short var_16 = (short)11116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
