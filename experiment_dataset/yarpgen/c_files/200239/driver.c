#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1582419630216526428ULL;
unsigned long long int var_5 = 9134140811072279236ULL;
long long int var_6 = 2763849099259660440LL;
unsigned int var_7 = 618004635U;
_Bool var_11 = (_Bool)1;
int var_13 = -508223242;
int zero = 0;
signed char var_15 = (signed char)61;
short var_16 = (short)28721;
short var_17 = (short)-11383;
long long int var_18 = -5356719851799509330LL;
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
