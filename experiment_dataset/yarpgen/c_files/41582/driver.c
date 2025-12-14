#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6066617899032365620ULL;
unsigned char var_2 = (unsigned char)149;
unsigned int var_3 = 2652826498U;
signed char var_5 = (signed char)-108;
signed char var_8 = (signed char)50;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3887736141U;
signed char var_11 = (signed char)13;
_Bool var_15 = (_Bool)0;
short var_17 = (short)10861;
int zero = 0;
int var_19 = 1198896431;
_Bool var_20 = (_Bool)0;
int var_21 = -1743140564;
unsigned char var_22 = (unsigned char)117;
unsigned char var_23 = (unsigned char)108;
int var_24 = 1158340667;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
