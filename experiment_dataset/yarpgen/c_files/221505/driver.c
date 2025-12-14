#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)113;
signed char var_8 = (signed char)-70;
unsigned char var_13 = (unsigned char)15;
int zero = 0;
int var_18 = 1068325196;
int var_19 = -1237437938;
unsigned char var_20 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
