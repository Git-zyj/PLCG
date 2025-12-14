#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7624;
unsigned short var_2 = (unsigned short)49468;
int var_3 = 1080715155;
long long int var_4 = -8149679455509864067LL;
unsigned long long int var_7 = 12771908912596789885ULL;
int var_11 = -418573449;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 12855464750442609191ULL;
long long int var_15 = -3631076660763491666LL;
int zero = 0;
unsigned long long int var_18 = 8579557739853549427ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 486931345U;
short var_21 = (short)22732;
long long int var_22 = -1549222164340146618LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
