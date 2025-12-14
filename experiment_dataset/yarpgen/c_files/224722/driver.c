#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3167744136U;
signed char var_9 = (signed char)106;
int zero = 0;
unsigned int var_12 = 4169647422U;
unsigned short var_13 = (unsigned short)58618;
unsigned int var_14 = 1150537132U;
int var_15 = -1397055857;
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
