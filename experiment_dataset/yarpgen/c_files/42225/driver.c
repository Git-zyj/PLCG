#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11074041394184623264ULL;
unsigned int var_4 = 3767964508U;
short var_7 = (short)18533;
long long int var_9 = -5554410448266545789LL;
unsigned long long int var_11 = 5513420926309305613ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)6979;
unsigned long long int var_13 = 11502141689612450914ULL;
unsigned short var_14 = (unsigned short)52616;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
