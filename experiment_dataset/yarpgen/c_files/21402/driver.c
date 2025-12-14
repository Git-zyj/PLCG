#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
signed char var_6 = (signed char)73;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 17468643673409275492ULL;
int zero = 0;
int var_14 = -553161495;
unsigned int var_15 = 2311407348U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
