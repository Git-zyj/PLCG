#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3771062053212916061LL;
unsigned int var_6 = 2754306766U;
short var_11 = (short)-32628;
unsigned short var_12 = (unsigned short)49881;
int zero = 0;
unsigned short var_13 = (unsigned short)36087;
int var_14 = -1196548828;
unsigned short var_15 = (unsigned short)55156;
void init() {
}

void checksum() {
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
