#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
int var_2 = 1831482752;
int var_4 = -963439471;
unsigned short var_5 = (unsigned short)5905;
long long int var_6 = 6069925716514015585LL;
unsigned short var_8 = (unsigned short)6171;
unsigned short var_9 = (unsigned short)10419;
int zero = 0;
unsigned int var_11 = 2839469660U;
unsigned int var_12 = 2299085476U;
int var_13 = 1205567487;
void init() {
}

void checksum() {
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
