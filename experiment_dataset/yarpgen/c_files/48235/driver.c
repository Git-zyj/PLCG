#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-40;
signed char var_6 = (signed char)-61;
signed char var_8 = (signed char)-28;
signed char var_11 = (signed char)6;
unsigned int var_13 = 2862659607U;
unsigned int var_19 = 2622424335U;
int zero = 0;
unsigned int var_20 = 1065621060U;
unsigned int var_21 = 3146287859U;
signed char var_22 = (signed char)123;
unsigned int var_23 = 541770560U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
