#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-2;
unsigned int var_9 = 3448581366U;
int var_13 = 561267577;
unsigned int var_15 = 2837469270U;
short var_18 = (short)-30928;
signed char var_19 = (signed char)-8;
int zero = 0;
signed char var_20 = (signed char)-50;
unsigned short var_21 = (unsigned short)62724;
signed char var_22 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
