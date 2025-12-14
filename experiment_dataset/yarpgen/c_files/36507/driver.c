#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2829242820412813461ULL;
int var_2 = -1774811304;
short var_4 = (short)-20159;
unsigned long long int var_5 = 15467518044774639097ULL;
short var_6 = (short)29531;
signed char var_9 = (signed char)-32;
signed char var_13 = (signed char)10;
int zero = 0;
unsigned short var_15 = (unsigned short)1457;
signed char var_16 = (signed char)-86;
void init() {
}

void checksum() {
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
