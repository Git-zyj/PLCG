#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)29770;
short var_14 = (short)3755;
long long int var_16 = -8831377964625823886LL;
short var_18 = (short)-27110;
int zero = 0;
unsigned long long int var_20 = 13192661973836995197ULL;
signed char var_21 = (signed char)73;
signed char var_22 = (signed char)114;
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
