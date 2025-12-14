#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-29482;
unsigned int var_11 = 2902950007U;
int zero = 0;
unsigned int var_12 = 3945636026U;
long long int var_13 = -8379254742399301527LL;
signed char var_14 = (signed char)119;
unsigned int var_15 = 1023696048U;
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
