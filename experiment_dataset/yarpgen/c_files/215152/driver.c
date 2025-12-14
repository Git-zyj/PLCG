#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
unsigned int var_1 = 1039780891U;
unsigned int var_4 = 3330323157U;
short var_5 = (short)-27455;
unsigned int var_6 = 236019928U;
unsigned int var_7 = 1830033645U;
unsigned int var_8 = 2708964451U;
unsigned int var_9 = 3566988037U;
short var_10 = (short)-14632;
int zero = 0;
unsigned int var_18 = 3103911874U;
short var_19 = (short)-26103;
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
