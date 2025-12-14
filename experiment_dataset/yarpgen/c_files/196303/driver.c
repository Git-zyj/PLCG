#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
unsigned long long int var_1 = 3388169844519422249ULL;
unsigned long long int var_2 = 5471827190290962975ULL;
unsigned long long int var_6 = 370016168293056637ULL;
unsigned short var_7 = (unsigned short)9750;
short var_11 = (short)18385;
unsigned long long int var_12 = 8594449223715411394ULL;
short var_14 = (short)24734;
int zero = 0;
short var_16 = (short)-20501;
unsigned short var_17 = (unsigned short)36402;
short var_18 = (short)-32750;
unsigned char var_19 = (unsigned char)179;
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
