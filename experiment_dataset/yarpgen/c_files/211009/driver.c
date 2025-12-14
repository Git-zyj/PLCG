#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21623;
int var_2 = -173891274;
unsigned long long int var_4 = 6985231137095302353ULL;
unsigned short var_7 = (unsigned short)21655;
short var_8 = (short)-28783;
unsigned short var_9 = (unsigned short)24813;
_Bool var_10 = (_Bool)0;
int var_11 = -1067695949;
unsigned char var_12 = (unsigned char)113;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
unsigned short var_16 = (unsigned short)60332;
int var_17 = 365183074;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
