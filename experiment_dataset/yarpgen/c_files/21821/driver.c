#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10434140357550803968ULL;
int var_6 = 864936541;
signed char var_7 = (signed char)-83;
short var_9 = (short)-24842;
int zero = 0;
short var_12 = (short)-7224;
long long int var_13 = -8176364327935155387LL;
int var_14 = 289922621;
signed char var_15 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
