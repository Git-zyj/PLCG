#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1287813990;
int var_1 = 981547938;
unsigned long long int var_2 = 2731526755884531215ULL;
unsigned long long int var_3 = 7210650927538402044ULL;
unsigned long long int var_4 = 16006018858962721280ULL;
long long int var_5 = 1699118907279172952LL;
unsigned char var_6 = (unsigned char)179;
int var_8 = -2042482149;
unsigned char var_9 = (unsigned char)100;
unsigned char var_10 = (unsigned char)69;
unsigned long long int var_11 = 7776066929493703363ULL;
short var_13 = (short)10547;
int zero = 0;
unsigned short var_14 = (unsigned short)20982;
unsigned long long int var_15 = 12277001227033421386ULL;
int var_16 = 830148480;
unsigned short var_17 = (unsigned short)5609;
short var_18 = (short)-18752;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
