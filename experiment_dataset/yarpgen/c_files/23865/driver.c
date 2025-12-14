#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3611319817U;
unsigned int var_3 = 738419964U;
long long int var_6 = 3485650962048179454LL;
unsigned int var_10 = 390273635U;
unsigned short var_12 = (unsigned short)332;
int zero = 0;
unsigned short var_14 = (unsigned short)9705;
unsigned short var_15 = (unsigned short)43196;
long long int var_16 = -7645565937883228958LL;
void init() {
}

void checksum() {
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
