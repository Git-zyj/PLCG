#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12226;
long long int var_4 = -423415847775564069LL;
long long int var_7 = 33828493724863237LL;
int var_8 = -1175695610;
unsigned short var_10 = (unsigned short)24133;
int zero = 0;
long long int var_12 = -8623363804493986894LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
