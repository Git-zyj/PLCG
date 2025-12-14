#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -649159405;
short var_10 = (short)13597;
unsigned int var_11 = 3714238940U;
unsigned long long int var_12 = 9388442368977220481ULL;
unsigned int var_14 = 1746010808U;
long long int var_15 = -5619046750495762684LL;
int zero = 0;
int var_16 = -1114785720;
signed char var_17 = (signed char)30;
void init() {
}

void checksum() {
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
