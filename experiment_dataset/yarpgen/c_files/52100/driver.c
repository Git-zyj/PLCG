#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24370;
unsigned int var_3 = 2613760556U;
int var_5 = 2096759071;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 766445902654787960ULL;
long long int var_11 = 496307756364825062LL;
short var_12 = (short)24786;
int zero = 0;
signed char var_14 = (signed char)-84;
unsigned int var_15 = 784661020U;
void init() {
}

void checksum() {
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
