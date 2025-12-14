#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28505;
unsigned long long int var_3 = 2817415375526551925ULL;
unsigned long long int var_5 = 5054711006526813061ULL;
short var_11 = (short)25546;
int zero = 0;
short var_19 = (short)19772;
unsigned int var_20 = 2994864568U;
short var_21 = (short)24039;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
