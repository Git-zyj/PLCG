#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8856;
long long int var_3 = -4532422340872285220LL;
int var_7 = -281650073;
unsigned long long int var_8 = 1061676335644034406ULL;
int var_9 = 1579810959;
int zero = 0;
int var_11 = -76415357;
long long int var_12 = -1690054557119493363LL;
signed char var_13 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
