#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -79623854;
int var_1 = -909385584;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_14 = (short)-16390;
short var_16 = (short)18551;
int zero = 0;
unsigned int var_17 = 1737564580U;
int var_18 = 404709399;
short var_19 = (short)12625;
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
