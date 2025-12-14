#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6719414434141395995LL;
unsigned int var_6 = 2172011039U;
unsigned long long int var_8 = 13630836840777191148ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)180;
unsigned int var_11 = 749852811U;
unsigned int var_12 = 937960336U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
