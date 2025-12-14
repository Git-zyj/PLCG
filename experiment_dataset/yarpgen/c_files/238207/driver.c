#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31394;
unsigned short var_1 = (unsigned short)37506;
signed char var_3 = (signed char)-61;
unsigned short var_4 = (unsigned short)56174;
short var_5 = (short)32684;
long long int var_8 = 1450813784907001968LL;
unsigned long long int var_9 = 14911851055302330709ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)28420;
int var_13 = 2135314684;
unsigned int var_15 = 2991983129U;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)8556;
long long int var_20 = -3495515423950160842LL;
unsigned char var_21 = (unsigned char)17;
unsigned int var_22 = 1491205676U;
long long int var_23 = -3698850083427690086LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
