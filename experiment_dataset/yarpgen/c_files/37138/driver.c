#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1288412496;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2670961974U;
unsigned short var_9 = (unsigned short)56393;
short var_11 = (short)-11714;
int zero = 0;
unsigned int var_13 = 3598104118U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5522344348681576479ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
