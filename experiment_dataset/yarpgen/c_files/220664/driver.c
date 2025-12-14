#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20601;
_Bool var_3 = (_Bool)0;
short var_10 = (short)10830;
signed char var_13 = (signed char)119;
unsigned char var_16 = (unsigned char)221;
unsigned char var_17 = (unsigned char)95;
unsigned long long int var_18 = 9073035589870067034ULL;
int zero = 0;
unsigned int var_19 = 1708564770U;
int var_20 = -1562631007;
signed char var_21 = (signed char)72;
int var_22 = 839814713;
void init() {
}

void checksum() {
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
