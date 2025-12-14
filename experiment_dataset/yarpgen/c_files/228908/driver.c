#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1885371570220458034ULL;
signed char var_7 = (signed char)70;
unsigned long long int var_9 = 14040464530666563090ULL;
signed char var_10 = (signed char)-45;
int zero = 0;
unsigned int var_16 = 2218462294U;
long long int var_17 = 2684199205972035446LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
