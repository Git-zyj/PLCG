#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15356906145048998788ULL;
unsigned short var_3 = (unsigned short)32616;
unsigned long long int var_5 = 12574972986847877916ULL;
unsigned long long int var_6 = 16873683264761163781ULL;
unsigned char var_12 = (unsigned char)142;
int zero = 0;
unsigned char var_13 = (unsigned char)118;
short var_14 = (short)19893;
unsigned long long int var_15 = 518245162522327381ULL;
long long int var_16 = -3308957293245113649LL;
int var_17 = 233178991;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
