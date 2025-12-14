#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2419406581150836077LL;
unsigned int var_1 = 2033881542U;
int var_3 = -2027897966;
unsigned int var_4 = 2352464373U;
short var_6 = (short)-23456;
signed char var_9 = (signed char)14;
int zero = 0;
short var_10 = (short)28033;
unsigned char var_11 = (unsigned char)228;
signed char var_12 = (signed char)75;
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
