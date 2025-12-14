#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6794128509355999960ULL;
unsigned int var_8 = 4121774453U;
signed char var_11 = (signed char)-127;
int zero = 0;
unsigned long long int var_14 = 15993921253621362020ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2918207370U;
unsigned short var_17 = (unsigned short)8385;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
