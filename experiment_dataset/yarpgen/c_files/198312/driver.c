#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64192;
int var_1 = -1897852253;
short var_2 = (short)21959;
unsigned int var_3 = 667054522U;
unsigned char var_4 = (unsigned char)158;
unsigned long long int var_6 = 9603711005595581050ULL;
unsigned short var_9 = (unsigned short)62899;
int zero = 0;
int var_11 = 1669675305;
unsigned short var_12 = (unsigned short)30872;
unsigned char var_13 = (unsigned char)46;
unsigned short var_14 = (unsigned short)21708;
unsigned short var_15 = (unsigned short)13389;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
