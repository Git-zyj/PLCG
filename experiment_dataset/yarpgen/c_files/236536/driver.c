#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8362117070740146672LL;
unsigned int var_7 = 1829889944U;
long long int var_8 = 6768010821199834018LL;
unsigned int var_9 = 4226780881U;
unsigned int var_10 = 1840415466U;
unsigned short var_11 = (unsigned short)10022;
unsigned short var_14 = (unsigned short)41020;
int var_17 = -190323781;
int zero = 0;
unsigned short var_18 = (unsigned short)45093;
unsigned int var_19 = 2626430040U;
void init() {
}

void checksum() {
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
