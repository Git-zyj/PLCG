#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21308;
unsigned short var_3 = (unsigned short)54681;
unsigned int var_5 = 658071328U;
unsigned int var_6 = 295307797U;
unsigned short var_10 = (unsigned short)53835;
int var_11 = 274015792;
int zero = 0;
unsigned int var_17 = 3832407784U;
short var_18 = (short)-14026;
void init() {
}

void checksum() {
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
