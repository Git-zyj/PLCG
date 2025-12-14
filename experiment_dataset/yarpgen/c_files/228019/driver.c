#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16022;
unsigned long long int var_9 = 17365404648633309508ULL;
unsigned long long int var_10 = 3512478909561487640ULL;
unsigned short var_17 = (unsigned short)31573;
unsigned char var_19 = (unsigned char)168;
int zero = 0;
long long int var_20 = 3706127406730036924LL;
short var_21 = (short)-30529;
int var_22 = -1383744724;
int var_23 = -900963831;
unsigned char var_24 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
