#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
signed char var_4 = (signed char)80;
unsigned short var_5 = (unsigned short)41212;
int var_15 = -1804412793;
int zero = 0;
unsigned int var_17 = 3581279660U;
unsigned int var_18 = 1500900848U;
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
