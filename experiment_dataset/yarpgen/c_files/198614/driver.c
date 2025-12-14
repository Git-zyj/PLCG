#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2427405235303658806ULL;
unsigned long long int var_5 = 8405664665955180073ULL;
signed char var_14 = (signed char)52;
short var_15 = (short)-2356;
int zero = 0;
long long int var_17 = -7631373939115086494LL;
unsigned long long int var_18 = 15723758888791005449ULL;
unsigned long long int var_19 = 12670408022097161909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
