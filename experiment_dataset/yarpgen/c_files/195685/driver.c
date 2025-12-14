#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3102097861581093972LL;
unsigned long long int var_2 = 3608428859441778105ULL;
long long int var_5 = 7424000360518981515LL;
int zero = 0;
int var_14 = 294784523;
unsigned short var_15 = (unsigned short)15849;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
