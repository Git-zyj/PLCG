#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5689552984793716480LL;
short var_2 = (short)-28332;
signed char var_4 = (signed char)126;
unsigned char var_6 = (unsigned char)164;
unsigned short var_9 = (unsigned short)12991;
int zero = 0;
int var_10 = 1525627524;
unsigned short var_11 = (unsigned short)15958;
short var_12 = (short)2993;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
