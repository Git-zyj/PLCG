#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4520814650331636935LL;
unsigned int var_5 = 2184170651U;
unsigned long long int var_11 = 12100961077692110012ULL;
unsigned short var_12 = (unsigned short)20031;
int zero = 0;
signed char var_15 = (signed char)67;
int var_16 = -363112744;
int var_17 = 1439803319;
unsigned long long int var_18 = 17263302030024794066ULL;
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
