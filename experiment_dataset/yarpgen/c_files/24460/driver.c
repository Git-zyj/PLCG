#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51482;
short var_1 = (short)-1373;
unsigned short var_3 = (unsigned short)38588;
unsigned short var_4 = (unsigned short)30597;
unsigned int var_5 = 2520016606U;
unsigned short var_6 = (unsigned short)13828;
long long int var_7 = -4632377467917507926LL;
int var_9 = 82667178;
short var_10 = (short)16332;
int var_12 = -913522798;
int zero = 0;
unsigned short var_15 = (unsigned short)16027;
unsigned int var_16 = 406268657U;
unsigned short var_17 = (unsigned short)40470;
void init() {
}

void checksum() {
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
