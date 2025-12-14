#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)44;
int var_3 = -1787455154;
_Bool var_4 = (_Bool)1;
short var_5 = (short)2122;
short var_6 = (short)4208;
int var_7 = 1351856826;
unsigned long long int var_10 = 2817838260090220129ULL;
long long int var_11 = 8528495460420420641LL;
short var_12 = (short)-4610;
unsigned short var_15 = (unsigned short)30444;
int zero = 0;
long long int var_16 = 5332768350942194775LL;
unsigned char var_17 = (unsigned char)90;
int var_18 = -557728564;
int var_19 = -1151007295;
void init() {
}

void checksum() {
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
