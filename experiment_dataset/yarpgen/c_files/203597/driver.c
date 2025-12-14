#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 343950924;
long long int var_2 = -201639720460702855LL;
unsigned int var_4 = 722856818U;
int var_6 = -1310096194;
int var_8 = -2132041932;
long long int var_9 = 7013177849148405042LL;
unsigned short var_10 = (unsigned short)62038;
long long int var_12 = -1261028380716423789LL;
int zero = 0;
unsigned int var_15 = 4271861039U;
unsigned char var_16 = (unsigned char)182;
short var_17 = (short)-14564;
void init() {
}

void checksum() {
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
