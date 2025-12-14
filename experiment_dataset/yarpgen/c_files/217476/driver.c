#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
long long int var_2 = -4316635509045354991LL;
signed char var_3 = (signed char)-88;
int var_4 = -852824028;
long long int var_5 = 8880835867014789621LL;
unsigned char var_7 = (unsigned char)151;
short var_8 = (short)30580;
int zero = 0;
unsigned short var_11 = (unsigned short)24375;
unsigned char var_12 = (unsigned char)153;
signed char var_13 = (signed char)10;
long long int var_14 = 2229726100382627170LL;
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
