#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 837935923U;
unsigned long long int var_3 = 10582893265193690012ULL;
unsigned char var_4 = (unsigned char)82;
int var_7 = -1586867035;
unsigned long long int var_8 = 4335134607920149019ULL;
short var_11 = (short)-22635;
short var_12 = (short)13071;
unsigned short var_13 = (unsigned short)10196;
int zero = 0;
long long int var_15 = 9000641757215255864LL;
short var_16 = (short)-17384;
void init() {
}

void checksum() {
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
