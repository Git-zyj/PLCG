#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9928;
unsigned short var_2 = (unsigned short)39350;
short var_3 = (short)-14656;
long long int var_4 = -5262908286461110531LL;
int var_9 = -717944781;
unsigned char var_11 = (unsigned char)54;
int zero = 0;
unsigned char var_12 = (unsigned char)219;
unsigned int var_13 = 2469221607U;
unsigned long long int var_14 = 13135731500582465904ULL;
signed char var_15 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
