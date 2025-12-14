#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28191;
unsigned int var_4 = 444155320U;
long long int var_6 = -4472671657637574149LL;
long long int var_7 = -7031549464042185234LL;
unsigned short var_8 = (unsigned short)59856;
int zero = 0;
unsigned short var_13 = (unsigned short)15158;
short var_14 = (short)15250;
unsigned int var_15 = 3179798555U;
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
