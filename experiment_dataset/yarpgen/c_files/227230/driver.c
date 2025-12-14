#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24705;
unsigned int var_2 = 1044806881U;
unsigned int var_5 = 2319395510U;
unsigned long long int var_6 = 7309200789828890266ULL;
unsigned int var_7 = 1006817280U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 697624557U;
unsigned long long int var_14 = 2715726614361404910ULL;
long long int var_15 = 960832679249132861LL;
long long int var_16 = -5475113150815718884LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
