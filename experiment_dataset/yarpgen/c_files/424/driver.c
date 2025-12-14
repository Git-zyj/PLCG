#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
signed char var_2 = (signed char)9;
unsigned short var_4 = (unsigned short)64031;
signed char var_7 = (signed char)19;
signed char var_15 = (signed char)67;
int zero = 0;
signed char var_19 = (signed char)13;
unsigned char var_20 = (unsigned char)250;
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
