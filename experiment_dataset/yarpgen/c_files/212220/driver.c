#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)27;
signed char var_14 = (signed char)-1;
unsigned short var_15 = (unsigned short)46996;
int zero = 0;
unsigned int var_16 = 1299548026U;
unsigned int var_17 = 1097135765U;
unsigned long long int var_18 = 786217597701076375ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
