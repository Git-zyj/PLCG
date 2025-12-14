#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4024656441963505690ULL;
long long int var_6 = -85920830325518677LL;
_Bool var_8 = (_Bool)1;
short var_11 = (short)4454;
unsigned int var_12 = 2482433957U;
short var_15 = (short)24914;
unsigned short var_16 = (unsigned short)42341;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2080494439235751419ULL;
signed char var_21 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
