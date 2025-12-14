#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -617315511;
short var_2 = (short)10310;
unsigned char var_5 = (unsigned char)242;
int var_7 = -1615413374;
int var_8 = 423180943;
int var_9 = -2026148934;
long long int var_14 = -4930603308680662518LL;
unsigned short var_15 = (unsigned short)47410;
int var_17 = -602583672;
int zero = 0;
int var_18 = -756234214;
unsigned long long int var_19 = 8432560208385654511ULL;
unsigned long long int var_20 = 2151732776513819451ULL;
void init() {
}

void checksum() {
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
