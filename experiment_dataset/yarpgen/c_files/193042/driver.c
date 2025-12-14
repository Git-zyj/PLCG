#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20583;
signed char var_4 = (signed char)-22;
unsigned char var_5 = (unsigned char)202;
_Bool var_8 = (_Bool)1;
long long int var_9 = -5081006435922675609LL;
short var_10 = (short)-15396;
unsigned int var_14 = 2133867614U;
unsigned short var_17 = (unsigned short)13485;
int zero = 0;
unsigned char var_18 = (unsigned char)174;
unsigned long long int var_19 = 6606551408739683437ULL;
unsigned long long int var_20 = 13314610657764552956ULL;
unsigned short var_21 = (unsigned short)55785;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
