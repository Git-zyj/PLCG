#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3685;
long long int var_2 = 467044656393656031LL;
unsigned long long int var_6 = 13096750058169436660ULL;
unsigned int var_8 = 2373641676U;
long long int var_16 = 3718295878426382923LL;
int zero = 0;
unsigned short var_17 = (unsigned short)16594;
short var_18 = (short)-5985;
void init() {
}

void checksum() {
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
