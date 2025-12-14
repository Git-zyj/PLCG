#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8431;
signed char var_4 = (signed char)67;
short var_13 = (short)-5556;
int zero = 0;
signed char var_18 = (signed char)38;
short var_19 = (short)-14167;
signed char var_20 = (signed char)25;
signed char var_21 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
