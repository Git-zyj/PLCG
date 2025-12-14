#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
short var_2 = (short)-26812;
short var_9 = (short)-27838;
short var_12 = (short)3496;
signed char var_14 = (signed char)43;
short var_15 = (short)-15052;
unsigned int var_17 = 1065345871U;
int zero = 0;
short var_19 = (short)-977;
unsigned int var_20 = 3169063438U;
short var_21 = (short)-23365;
unsigned int var_22 = 3892165294U;
signed char var_23 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
