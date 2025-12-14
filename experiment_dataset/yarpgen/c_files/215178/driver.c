#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned long long int var_1 = 17337613333185984926ULL;
signed char var_7 = (signed char)78;
signed char var_9 = (signed char)-35;
short var_17 = (short)17575;
int zero = 0;
short var_20 = (short)-14771;
int var_21 = -514168646;
long long int var_22 = 1603384160766077624LL;
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
