#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)12216;
signed char var_4 = (signed char)-16;
signed char var_7 = (signed char)105;
short var_11 = (short)21314;
unsigned short var_13 = (unsigned short)18331;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)66;
unsigned long long int var_17 = 13787795469875735383ULL;
unsigned char var_18 = (unsigned char)130;
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
