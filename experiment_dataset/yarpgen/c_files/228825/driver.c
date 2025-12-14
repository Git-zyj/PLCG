#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1866963511;
int var_4 = -98160110;
unsigned long long int var_6 = 9539128632055113413ULL;
long long int var_7 = -4716509292572347918LL;
int var_9 = 1019387650;
int zero = 0;
short var_11 = (short)17508;
unsigned short var_12 = (unsigned short)44816;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
