#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)41;
short var_2 = (short)21207;
short var_4 = (short)-5458;
long long int var_5 = 6195871525119487254LL;
int var_6 = -1614361350;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2012788128U;
int var_11 = 1480512030;
signed char var_13 = (signed char)122;
int zero = 0;
unsigned long long int var_15 = 11253632551735127365ULL;
int var_16 = -1354785461;
unsigned char var_17 = (unsigned char)41;
short var_18 = (short)-28204;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
