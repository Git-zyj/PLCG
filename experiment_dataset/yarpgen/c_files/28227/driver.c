#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15212;
int var_4 = -620568638;
unsigned short var_8 = (unsigned short)24740;
int zero = 0;
short var_10 = (short)10881;
unsigned int var_11 = 2010121664U;
long long int var_12 = 1830844512061995851LL;
unsigned int var_13 = 4072674094U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
