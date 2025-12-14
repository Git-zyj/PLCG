#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 568569198;
unsigned int var_2 = 523009550U;
unsigned int var_4 = 2685190398U;
signed char var_6 = (signed char)116;
unsigned int var_7 = 1894368263U;
unsigned short var_9 = (unsigned short)42030;
short var_10 = (short)-8507;
long long int var_11 = 7477083892223879195LL;
int var_12 = 328505423;
int zero = 0;
unsigned long long int var_14 = 6187517436527518300ULL;
long long int var_15 = 6872287520954223941LL;
short var_16 = (short)-11600;
unsigned short var_17 = (unsigned short)316;
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
