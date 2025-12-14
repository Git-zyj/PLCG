#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16098;
unsigned long long int var_4 = 18316293625244688136ULL;
unsigned short var_7 = (unsigned short)60151;
long long int var_8 = -9076524802969196009LL;
unsigned char var_10 = (unsigned char)127;
unsigned int var_13 = 163036979U;
int zero = 0;
unsigned long long int var_15 = 9637994243826194283ULL;
int var_16 = 944646309;
unsigned int var_17 = 81127290U;
int var_18 = 1003287631;
int var_19 = -449568708;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
