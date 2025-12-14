#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3346212785559235767LL;
unsigned int var_7 = 2057727825U;
unsigned int var_11 = 3973079571U;
int zero = 0;
unsigned char var_12 = (unsigned char)20;
short var_13 = (short)7888;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
