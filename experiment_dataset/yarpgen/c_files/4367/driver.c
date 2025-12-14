#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29249;
unsigned short var_4 = (unsigned short)27293;
unsigned long long int var_5 = 4941298964706060417ULL;
signed char var_8 = (signed char)10;
signed char var_10 = (signed char)74;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 89150384U;
void init() {
}

void checksum() {
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
