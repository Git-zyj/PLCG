#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
long long int var_2 = 6440897229726263216LL;
int var_3 = -435227690;
unsigned int var_4 = 811521943U;
int zero = 0;
short var_14 = (short)1676;
signed char var_15 = (signed char)84;
signed char var_16 = (signed char)101;
signed char var_17 = (signed char)-21;
long long int var_18 = -8479374277860896760LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
