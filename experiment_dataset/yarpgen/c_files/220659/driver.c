#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1067862415;
short var_4 = (short)21866;
unsigned int var_5 = 1633435474U;
short var_6 = (short)18754;
int var_8 = -52101464;
int var_9 = -1403228271;
signed char var_11 = (signed char)100;
int zero = 0;
int var_13 = -1009092475;
short var_14 = (short)1332;
unsigned int var_15 = 3252881838U;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
