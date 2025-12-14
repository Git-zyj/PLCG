#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
short var_4 = (short)543;
unsigned char var_12 = (unsigned char)125;
int var_15 = 1220525420;
int zero = 0;
int var_18 = -1557038202;
unsigned short var_19 = (unsigned short)39713;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8030927795584587275LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
