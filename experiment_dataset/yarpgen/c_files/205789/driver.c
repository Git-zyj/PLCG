#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
short var_1 = (short)-17016;
unsigned short var_2 = (unsigned short)29327;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3127142311U;
unsigned short var_11 = (unsigned short)32870;
long long int var_13 = 3125113046312555127LL;
unsigned short var_15 = (unsigned short)61177;
int var_16 = 961781137;
unsigned int var_17 = 836526835U;
short var_19 = (short)-31630;
int zero = 0;
unsigned short var_20 = (unsigned short)54546;
short var_21 = (short)-3502;
unsigned int var_22 = 106449248U;
int var_23 = -2045411983;
void init() {
}

void checksum() {
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
