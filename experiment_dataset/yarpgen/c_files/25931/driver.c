#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)7809;
signed char var_9 = (signed char)-19;
short var_15 = (short)13579;
unsigned char var_18 = (unsigned char)123;
int zero = 0;
short var_19 = (short)17998;
int var_20 = 1578915204;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
