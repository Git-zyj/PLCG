#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-50;
unsigned long long int var_6 = 6102300559054587546ULL;
unsigned long long int var_8 = 17694914693869897730ULL;
signed char var_9 = (signed char)-13;
signed char var_12 = (signed char)115;
int zero = 0;
int var_17 = -103383327;
unsigned long long int var_18 = 10218786536600777467ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
