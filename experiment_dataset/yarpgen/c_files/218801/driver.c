#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3904844526U;
unsigned short var_1 = (unsigned short)55757;
signed char var_4 = (signed char)51;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)44;
signed char var_11 = (signed char)96;
unsigned long long int var_12 = 14936013853545095352ULL;
signed char var_13 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
