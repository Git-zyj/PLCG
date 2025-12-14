#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -1467547260;
short var_15 = (short)-18215;
int zero = 0;
int var_16 = 1748033418;
long long int var_17 = -4126980462511476252LL;
unsigned short var_18 = (unsigned short)37203;
unsigned char var_19 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
