#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7831076251653722738LL;
unsigned short var_3 = (unsigned short)35502;
unsigned char var_4 = (unsigned char)173;
unsigned short var_6 = (unsigned short)23558;
int var_7 = -842960578;
int var_11 = -1823720976;
int var_13 = -1660450800;
long long int var_14 = -2526445223686739313LL;
unsigned long long int var_15 = 4472152727018682367ULL;
int zero = 0;
long long int var_16 = 7908866903778659545LL;
long long int var_17 = -7781279986391305911LL;
unsigned char var_18 = (unsigned char)187;
unsigned char var_19 = (unsigned char)79;
unsigned long long int var_20 = 3027134450968338336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
