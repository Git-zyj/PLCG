#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-30;
signed char var_15 = (signed char)29;
short var_19 = (short)22047;
int zero = 0;
short var_20 = (short)-20919;
unsigned long long int var_21 = 4354339209509062710ULL;
unsigned char var_22 = (unsigned char)246;
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
