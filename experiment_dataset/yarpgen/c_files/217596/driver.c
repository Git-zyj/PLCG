#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)79;
int var_2 = -380042347;
unsigned char var_3 = (unsigned char)176;
signed char var_4 = (signed char)9;
unsigned int var_5 = 3600773088U;
_Bool var_6 = (_Bool)1;
short var_8 = (short)2990;
short var_10 = (short)32367;
int zero = 0;
unsigned char var_11 = (unsigned char)192;
unsigned long long int var_12 = 14043229610728217881ULL;
short var_13 = (short)-12754;
unsigned long long int var_14 = 6645792739730883951ULL;
long long int var_15 = 2027828820119196965LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
