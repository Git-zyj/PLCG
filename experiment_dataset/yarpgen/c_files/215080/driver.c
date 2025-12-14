#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 590810867U;
unsigned int var_1 = 3973375708U;
int var_2 = 1217038910;
unsigned short var_3 = (unsigned short)13830;
short var_4 = (short)11315;
short var_6 = (short)26941;
unsigned short var_7 = (unsigned short)34966;
long long int var_9 = -2356183532077865486LL;
int zero = 0;
int var_10 = 718746199;
long long int var_11 = 4361275807152162988LL;
unsigned int var_12 = 1950964367U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
