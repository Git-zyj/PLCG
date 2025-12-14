#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6344567863624129094LL;
short var_1 = (short)-18973;
short var_3 = (short)7281;
short var_12 = (short)26225;
short var_14 = (short)19276;
unsigned int var_15 = 3081558880U;
short var_17 = (short)-9519;
int zero = 0;
long long int var_19 = -855363308043198716LL;
int var_20 = -1397693801;
short var_21 = (short)31939;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
