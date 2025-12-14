#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7410367311666786007LL;
unsigned short var_2 = (unsigned short)64495;
unsigned long long int var_7 = 12905005747990273791ULL;
short var_9 = (short)4641;
unsigned short var_10 = (unsigned short)43060;
long long int var_11 = -9207401675878074695LL;
unsigned int var_12 = 3345863529U;
int zero = 0;
int var_16 = -1304519089;
unsigned char var_17 = (unsigned char)94;
long long int var_18 = -6238915050018711412LL;
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
