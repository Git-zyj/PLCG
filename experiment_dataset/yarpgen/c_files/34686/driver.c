#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16048;
long long int var_4 = -3231898281251820657LL;
unsigned long long int var_5 = 16389034428181521614ULL;
unsigned short var_7 = (unsigned short)16296;
_Bool var_10 = (_Bool)1;
short var_19 = (short)-15289;
int zero = 0;
unsigned char var_20 = (unsigned char)210;
unsigned long long int var_21 = 4671887041410150769ULL;
unsigned short var_22 = (unsigned short)15732;
short var_23 = (short)-31079;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
