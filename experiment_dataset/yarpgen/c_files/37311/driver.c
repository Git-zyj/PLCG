#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1830208394;
unsigned char var_3 = (unsigned char)148;
unsigned int var_4 = 3409939816U;
unsigned char var_10 = (unsigned char)100;
unsigned int var_14 = 2067808924U;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6003932789262083907LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
