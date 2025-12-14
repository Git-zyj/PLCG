#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1659384546;
long long int var_5 = 6296534469146431169LL;
long long int var_6 = 3412195040211663800LL;
long long int var_8 = -4617366713931881489LL;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 2109730551U;
long long int var_16 = -7385958230699734221LL;
int zero = 0;
signed char var_18 = (signed char)-111;
int var_19 = -50871801;
void init() {
}

void checksum() {
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
