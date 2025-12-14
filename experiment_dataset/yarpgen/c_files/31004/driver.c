#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2406420031125786623ULL;
int var_7 = -1302883515;
short var_10 = (short)-5783;
int zero = 0;
signed char var_13 = (signed char)-113;
short var_14 = (short)27273;
unsigned int var_15 = 347169238U;
void init() {
}

void checksum() {
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
