#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)30728;
long long int var_2 = 4125486898945422897LL;
long long int var_3 = 6729164402170096865LL;
int zero = 0;
long long int var_10 = 7096447213753436920LL;
unsigned long long int var_11 = 9198411420392710123ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
