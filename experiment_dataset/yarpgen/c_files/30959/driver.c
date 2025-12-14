#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13734;
unsigned short var_8 = (unsigned short)27187;
signed char var_11 = (signed char)-6;
int zero = 0;
short var_12 = (short)2047;
int var_13 = -691168940;
unsigned long long int var_14 = 10034071866730373988ULL;
int var_15 = 287944040;
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
