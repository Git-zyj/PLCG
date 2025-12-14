#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3927;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-103;
int var_7 = -1099762540;
unsigned short var_13 = (unsigned short)60743;
unsigned char var_14 = (unsigned char)214;
int zero = 0;
unsigned short var_16 = (unsigned short)61182;
int var_17 = 1715174598;
void init() {
}

void checksum() {
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
