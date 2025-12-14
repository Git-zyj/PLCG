#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4286349697270819538ULL;
unsigned char var_8 = (unsigned char)108;
unsigned char var_12 = (unsigned char)33;
signed char var_15 = (signed char)55;
signed char var_18 = (signed char)-7;
int zero = 0;
long long int var_20 = -230879718458153486LL;
long long int var_21 = 1549667781968661420LL;
void init() {
}

void checksum() {
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
