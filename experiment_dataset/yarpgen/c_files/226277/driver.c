#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-28;
unsigned long long int var_4 = 2073217183820744994ULL;
long long int var_5 = -51844414621041207LL;
short var_8 = (short)11896;
int zero = 0;
unsigned short var_10 = (unsigned short)29341;
unsigned char var_11 = (unsigned char)117;
long long int var_12 = -4122618563252878331LL;
unsigned long long int var_13 = 18414468130055205360ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
