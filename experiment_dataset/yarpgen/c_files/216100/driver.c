#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20263;
unsigned long long int var_2 = 12077905915235704496ULL;
unsigned long long int var_6 = 4638692155357460456ULL;
short var_8 = (short)-15121;
long long int var_9 = 7008672957177964301LL;
unsigned int var_10 = 500025442U;
unsigned int var_13 = 2973223266U;
unsigned short var_15 = (unsigned short)32692;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5050756222657462883LL;
void init() {
}

void checksum() {
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
