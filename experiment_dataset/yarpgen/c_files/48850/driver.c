#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 289136631U;
short var_5 = (short)4569;
unsigned int var_7 = 2554614382U;
unsigned int var_10 = 809052065U;
int zero = 0;
unsigned int var_11 = 640973985U;
unsigned int var_12 = 1681926852U;
unsigned int var_13 = 1353172575U;
short var_14 = (short)601;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
