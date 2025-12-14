#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1157987946;
short var_1 = (short)-32282;
_Bool var_2 = (_Bool)1;
long long int var_3 = 3965106840273775462LL;
long long int var_5 = -5794057809394085598LL;
signed char var_6 = (signed char)21;
_Bool var_7 = (_Bool)1;
short var_14 = (short)-25042;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_17 = (short)25697;
unsigned char var_18 = (unsigned char)79;
unsigned short var_19 = (unsigned short)44898;
signed char var_20 = (signed char)44;
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
