#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1965225982;
int var_1 = 126920000;
short var_2 = (short)-8325;
unsigned short var_3 = (unsigned short)44121;
long long int var_4 = 5095507894659700762LL;
unsigned long long int var_5 = 4833460299806684569ULL;
unsigned char var_12 = (unsigned char)80;
unsigned long long int var_14 = 12853054588969933843ULL;
unsigned short var_16 = (unsigned short)19144;
int zero = 0;
unsigned short var_17 = (unsigned short)27671;
unsigned short var_18 = (unsigned short)46563;
void init() {
}

void checksum() {
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
