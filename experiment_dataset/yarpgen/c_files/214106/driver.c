#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28885;
long long int var_1 = 6985687322457383960LL;
signed char var_3 = (signed char)-108;
unsigned short var_8 = (unsigned short)9232;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-24172;
int zero = 0;
signed char var_15 = (signed char)31;
long long int var_16 = 1706619038713437008LL;
_Bool var_17 = (_Bool)1;
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
