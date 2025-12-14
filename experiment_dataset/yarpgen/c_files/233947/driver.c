#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1286142838;
unsigned long long int var_8 = 12914490360174460802ULL;
unsigned int var_10 = 1851771184U;
int zero = 0;
unsigned int var_11 = 233309833U;
signed char var_12 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
