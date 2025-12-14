#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3590755632U;
short var_4 = (short)4824;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 771480430U;
int var_7 = -1010999534;
unsigned int var_10 = 3139325328U;
unsigned int var_11 = 1970902616U;
unsigned short var_12 = (unsigned short)51986;
unsigned int var_15 = 4102935956U;
int zero = 0;
unsigned long long int var_16 = 12925249870469225897ULL;
unsigned short var_17 = (unsigned short)24825;
unsigned char var_18 = (unsigned char)151;
void init() {
}

void checksum() {
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
