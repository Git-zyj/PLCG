#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)54;
signed char var_3 = (signed char)67;
short var_6 = (short)19418;
unsigned long long int var_9 = 8666075341494065501ULL;
unsigned char var_11 = (unsigned char)149;
short var_13 = (short)-5257;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-4266;
short var_17 = (short)-5172;
short var_18 = (short)30254;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
