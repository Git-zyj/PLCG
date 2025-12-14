#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 374664883328233806ULL;
short var_1 = (short)11022;
unsigned short var_2 = (unsigned short)1724;
short var_3 = (short)-12462;
signed char var_5 = (signed char)-2;
unsigned long long int var_6 = 15688246102117432238ULL;
unsigned char var_8 = (unsigned char)240;
unsigned short var_9 = (unsigned short)15177;
int zero = 0;
signed char var_10 = (signed char)53;
unsigned char var_11 = (unsigned char)188;
unsigned long long int var_12 = 6099080429432858717ULL;
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
