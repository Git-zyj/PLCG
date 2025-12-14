#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 781405236617949564LL;
short var_2 = (short)26746;
unsigned int var_5 = 1548787767U;
int var_7 = -519275987;
unsigned int var_11 = 1818901654U;
short var_13 = (short)22508;
int zero = 0;
int var_14 = 1369791702;
short var_15 = (short)7541;
int var_16 = -1514980118;
unsigned short var_17 = (unsigned short)20348;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
