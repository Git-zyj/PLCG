#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17555;
unsigned short var_3 = (unsigned short)41454;
int var_9 = -1540191327;
unsigned char var_10 = (unsigned char)114;
long long int var_12 = -2000641625808165911LL;
unsigned short var_15 = (unsigned short)51841;
int zero = 0;
unsigned short var_16 = (unsigned short)37665;
long long int var_17 = -509449558724522169LL;
int var_18 = 1359139706;
short var_19 = (short)31574;
short var_20 = (short)-3653;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
