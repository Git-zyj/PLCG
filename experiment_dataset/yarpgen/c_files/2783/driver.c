#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -913738311563572477LL;
unsigned char var_2 = (unsigned char)220;
long long int var_5 = 2112450319932029670LL;
unsigned short var_11 = (unsigned short)51344;
short var_12 = (short)-6798;
unsigned int var_13 = 2906067709U;
int zero = 0;
unsigned short var_14 = (unsigned short)56985;
unsigned char var_15 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
