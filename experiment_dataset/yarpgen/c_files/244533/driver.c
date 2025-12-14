#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6754567672083621966LL;
_Bool var_5 = (_Bool)0;
int var_9 = 1271342501;
unsigned short var_12 = (unsigned short)21999;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)7087;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-5975;
unsigned int var_20 = 939005525U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
