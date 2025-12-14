#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned short var_2 = (unsigned short)40947;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)40781;
unsigned char var_7 = (unsigned char)222;
unsigned short var_10 = (unsigned short)3050;
unsigned short var_11 = (unsigned short)26483;
int zero = 0;
int var_16 = 474985517;
int var_17 = 1520438073;
unsigned int var_18 = 1838839321U;
unsigned long long int var_19 = 296778560312548881ULL;
short var_20 = (short)-19805;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
