#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -191571168;
long long int var_4 = 1857535735934388701LL;
_Bool var_6 = (_Bool)1;
long long int var_10 = 2601572100350122575LL;
unsigned short var_11 = (unsigned short)53889;
int zero = 0;
unsigned short var_13 = (unsigned short)25190;
unsigned char var_14 = (unsigned char)1;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-6986;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
