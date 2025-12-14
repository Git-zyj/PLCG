#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8763116629617701286LL;
int var_8 = 391748998;
long long int var_13 = -3235906889670223540LL;
int zero = 0;
unsigned short var_14 = (unsigned short)53801;
short var_15 = (short)-31350;
int var_16 = 193885401;
unsigned char var_17 = (unsigned char)157;
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
