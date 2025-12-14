#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)52478;
long long int var_8 = 6974074269582099127LL;
unsigned short var_9 = (unsigned short)13112;
unsigned char var_14 = (unsigned char)42;
unsigned int var_16 = 2721242137U;
int zero = 0;
unsigned char var_17 = (unsigned char)137;
_Bool var_18 = (_Bool)1;
int var_19 = 1789115848;
short var_20 = (short)30113;
void init() {
}

void checksum() {
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
