#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11943416733675112237ULL;
long long int var_8 = -8730599060955381159LL;
short var_18 = (short)-24922;
int zero = 0;
unsigned short var_19 = (unsigned short)37618;
int var_20 = -1244044275;
int var_21 = -1594480914;
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
