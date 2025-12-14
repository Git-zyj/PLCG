#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 788713916;
short var_11 = (short)-6855;
unsigned int var_12 = 2694390989U;
int var_13 = -458900759;
int zero = 0;
unsigned short var_17 = (unsigned short)51442;
unsigned short var_18 = (unsigned short)43959;
short var_19 = (short)17617;
unsigned int var_20 = 2797245657U;
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
