#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4508;
unsigned int var_4 = 1252889800U;
unsigned short var_6 = (unsigned short)57912;
unsigned short var_9 = (unsigned short)15665;
unsigned int var_10 = 691435055U;
int zero = 0;
long long int var_17 = 1336415002459043199LL;
unsigned char var_18 = (unsigned char)203;
unsigned int var_19 = 3959254672U;
void init() {
}

void checksum() {
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
