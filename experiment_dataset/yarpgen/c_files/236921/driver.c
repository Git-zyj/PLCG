#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8021;
unsigned char var_1 = (unsigned char)141;
unsigned short var_2 = (unsigned short)50451;
unsigned long long int var_4 = 8755117382684238249ULL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
long long int var_14 = -6468089110117872403LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)32391;
unsigned long long int var_17 = 3928643895039565913ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)40614;
int var_22 = -1405632995;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
