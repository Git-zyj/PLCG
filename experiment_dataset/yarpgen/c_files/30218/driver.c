#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-10064;
unsigned int var_8 = 2931906900U;
signed char var_11 = (signed char)58;
unsigned int var_13 = 3794603942U;
int zero = 0;
unsigned long long int var_17 = 15815361522864831217ULL;
unsigned int var_18 = 3038355857U;
void init() {
}

void checksum() {
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
