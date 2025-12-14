#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 433301936U;
unsigned int var_2 = 4112749106U;
unsigned char var_4 = (unsigned char)200;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-19743;
long long int var_10 = -2454947000843794663LL;
int var_14 = 455847341;
int zero = 0;
signed char var_16 = (signed char)-11;
unsigned char var_17 = (unsigned char)31;
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
