#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4700666363981775201LL;
unsigned short var_2 = (unsigned short)11832;
short var_4 = (short)25411;
unsigned char var_7 = (unsigned char)197;
unsigned char var_8 = (unsigned char)116;
unsigned int var_9 = 2259153193U;
unsigned int var_11 = 788277626U;
unsigned short var_12 = (unsigned short)37160;
int zero = 0;
signed char var_13 = (signed char)95;
unsigned int var_14 = 2813470607U;
long long int var_15 = -6299555727635759229LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
