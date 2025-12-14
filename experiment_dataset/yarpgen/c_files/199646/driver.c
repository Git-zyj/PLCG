#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
unsigned long long int var_4 = 11927926142022136865ULL;
signed char var_5 = (signed char)-49;
unsigned long long int var_7 = 6586749376539059613ULL;
unsigned char var_8 = (unsigned char)61;
int var_10 = -1828032432;
signed char var_11 = (signed char)108;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
signed char var_14 = (signed char)51;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-109;
unsigned short var_17 = (unsigned short)48628;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
