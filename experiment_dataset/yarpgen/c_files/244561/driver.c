#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14526285945828954987ULL;
unsigned char var_2 = (unsigned char)58;
short var_3 = (short)26185;
unsigned char var_4 = (unsigned char)79;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)120;
signed char var_12 = (signed char)108;
int zero = 0;
int var_13 = -486714609;
unsigned long long int var_14 = 3088217248876682341ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
