#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8001062206946948101LL;
unsigned long long int var_1 = 3680344839790607880ULL;
unsigned short var_2 = (unsigned short)21963;
short var_4 = (short)2642;
unsigned char var_6 = (unsigned char)39;
short var_12 = (short)14580;
unsigned int var_13 = 3913111886U;
unsigned char var_14 = (unsigned char)222;
unsigned char var_15 = (unsigned char)127;
unsigned char var_16 = (unsigned char)247;
unsigned short var_17 = (unsigned short)6900;
unsigned short var_18 = (unsigned short)2509;
int zero = 0;
unsigned int var_19 = 1806213078U;
long long int var_20 = 6984284072979028254LL;
void init() {
}

void checksum() {
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
