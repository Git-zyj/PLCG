#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)23748;
signed char var_4 = (signed char)-123;
unsigned long long int var_7 = 1685186050481092932ULL;
long long int var_9 = 3469959980379464180LL;
unsigned short var_12 = (unsigned short)23034;
unsigned long long int var_15 = 17922998476081136988ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)8302;
short var_17 = (short)-15870;
unsigned long long int var_18 = 7242915643052808309ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13248577257614573977ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
