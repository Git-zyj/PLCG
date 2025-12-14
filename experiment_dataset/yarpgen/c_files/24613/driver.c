#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 310057272276905331LL;
unsigned char var_2 = (unsigned char)73;
unsigned char var_4 = (unsigned char)108;
short var_7 = (short)22719;
unsigned short var_9 = (unsigned short)31528;
unsigned short var_14 = (unsigned short)51023;
unsigned short var_15 = (unsigned short)63968;
int zero = 0;
short var_18 = (short)-1020;
unsigned short var_19 = (unsigned short)16570;
void init() {
}

void checksum() {
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
