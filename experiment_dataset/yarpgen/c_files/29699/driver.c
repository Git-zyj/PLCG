#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2627081840120057977LL;
long long int var_2 = -2967160121819938479LL;
long long int var_5 = -3605876674739884703LL;
int zero = 0;
long long int var_15 = 3734521249579595627LL;
short var_16 = (short)5861;
unsigned char var_17 = (unsigned char)52;
unsigned char var_18 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
