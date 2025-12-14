#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1989381120U;
unsigned short var_6 = (unsigned short)14865;
int zero = 0;
unsigned long long int var_13 = 9910720174218825276ULL;
unsigned int var_14 = 2701302425U;
long long int var_15 = -2324361168499932024LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
