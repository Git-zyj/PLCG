#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)86;
unsigned long long int var_16 = 5619382650904221874ULL;
signed char var_17 = (signed char)13;
int zero = 0;
short var_19 = (short)-20651;
unsigned long long int var_20 = 11145252863241442213ULL;
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
