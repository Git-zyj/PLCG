#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
long long int var_1 = 7975161233755275176LL;
int var_4 = 108248869;
short var_5 = (short)-19567;
unsigned int var_9 = 1584710899U;
int zero = 0;
unsigned long long int var_15 = 11264155236636392430ULL;
unsigned int var_16 = 3330645843U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
