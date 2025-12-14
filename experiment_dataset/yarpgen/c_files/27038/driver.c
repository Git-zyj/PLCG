#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-123;
unsigned char var_4 = (unsigned char)32;
short var_11 = (short)-27116;
signed char var_12 = (signed char)101;
int zero = 0;
int var_20 = 465725622;
unsigned char var_21 = (unsigned char)27;
signed char var_22 = (signed char)2;
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
