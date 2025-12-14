#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
unsigned char var_2 = (unsigned char)232;
short var_3 = (short)-11842;
signed char var_7 = (signed char)100;
long long int var_9 = 4636187490136979334LL;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
signed char var_11 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
