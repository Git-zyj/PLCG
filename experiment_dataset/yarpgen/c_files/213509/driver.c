#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned long long int var_1 = 722169012559787385ULL;
unsigned short var_2 = (unsigned short)42377;
unsigned char var_3 = (unsigned char)9;
int var_6 = 1230696302;
unsigned long long int var_7 = 15519501216925850270ULL;
int var_8 = -315664495;
unsigned char var_9 = (unsigned char)241;
unsigned short var_10 = (unsigned short)31493;
_Bool var_11 = (_Bool)0;
short var_12 = (short)31185;
long long int var_14 = 6959552064044435065LL;
unsigned short var_16 = (unsigned short)10291;
unsigned long long int var_17 = 8039519090613076643ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4081565991355249184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
