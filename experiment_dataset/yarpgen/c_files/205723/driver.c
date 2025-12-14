#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3525814764406134020LL;
unsigned long long int var_2 = 9410035995349622548ULL;
long long int var_3 = -9217858803606528303LL;
unsigned long long int var_4 = 887471165931416038ULL;
signed char var_15 = (signed char)-6;
int zero = 0;
short var_16 = (short)-8213;
unsigned long long int var_17 = 16011034270767528491ULL;
int var_18 = -298318083;
unsigned long long int var_19 = 15492879096371969655ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
