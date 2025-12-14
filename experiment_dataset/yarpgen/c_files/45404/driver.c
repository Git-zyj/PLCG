#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3567227838642721969LL;
long long int var_2 = 2510557700356673230LL;
unsigned int var_4 = 2987821385U;
unsigned int var_5 = 123873472U;
unsigned short var_6 = (unsigned short)58834;
unsigned char var_8 = (unsigned char)71;
long long int var_11 = -8788986849975796269LL;
int zero = 0;
unsigned int var_15 = 4275207345U;
unsigned long long int var_16 = 15666593000023991719ULL;
short var_17 = (short)12987;
unsigned int var_18 = 1690600155U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
