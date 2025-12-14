#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3578951070U;
unsigned int var_1 = 3731767422U;
short var_2 = (short)139;
unsigned char var_3 = (unsigned char)37;
unsigned int var_5 = 1194596545U;
unsigned char var_6 = (unsigned char)11;
short var_7 = (short)25329;
short var_8 = (short)31814;
unsigned int var_10 = 1184913233U;
unsigned int var_11 = 1205899553U;
long long int var_12 = -7027652583850293401LL;
int zero = 0;
unsigned char var_13 = (unsigned char)244;
unsigned short var_14 = (unsigned short)12211;
unsigned int var_15 = 1389577965U;
long long int var_16 = 7530691853892664728LL;
unsigned long long int var_17 = 12455279662812908570ULL;
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
