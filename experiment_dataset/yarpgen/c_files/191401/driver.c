#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7813040080193935944LL;
short var_7 = (short)4700;
int var_13 = 1580990654;
signed char var_15 = (signed char)-105;
int zero = 0;
long long int var_16 = 3228921858388406354LL;
signed char var_17 = (signed char)-79;
long long int var_18 = -8104046853542243208LL;
unsigned short var_19 = (unsigned short)64962;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
