#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8194250556707732845LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 1402306982683172955LL;
unsigned short var_4 = (unsigned short)46302;
unsigned short var_6 = (unsigned short)16093;
signed char var_12 = (signed char)0;
unsigned short var_13 = (unsigned short)35560;
int zero = 0;
signed char var_15 = (signed char)122;
long long int var_16 = 4786193395829290830LL;
unsigned int var_17 = 3423385842U;
void init() {
}

void checksum() {
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
