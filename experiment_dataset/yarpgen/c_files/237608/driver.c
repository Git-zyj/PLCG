#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5111537981175979916LL;
unsigned short var_3 = (unsigned short)19694;
long long int var_7 = -571583513967394887LL;
unsigned long long int var_9 = 13418897459206276710ULL;
unsigned short var_10 = (unsigned short)35262;
unsigned short var_11 = (unsigned short)42924;
unsigned long long int var_12 = 5865805024200409131ULL;
int zero = 0;
long long int var_14 = 5241497564028187497LL;
unsigned long long int var_15 = 2280691476492022162ULL;
short var_16 = (short)970;
long long int var_17 = 3463835385736087493LL;
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
