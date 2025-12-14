#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
unsigned int var_1 = 3650367169U;
unsigned long long int var_3 = 18276539786760219336ULL;
unsigned short var_5 = (unsigned short)33427;
unsigned long long int var_6 = 13061184411217518775ULL;
short var_8 = (short)-32195;
unsigned char var_9 = (unsigned char)225;
unsigned long long int var_13 = 12735872842669183358ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)48;
long long int var_17 = -1217172248875137006LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
