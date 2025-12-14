#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8162962248771824920LL;
unsigned long long int var_6 = 11702215294465667907ULL;
unsigned int var_7 = 2974841057U;
int zero = 0;
unsigned char var_10 = (unsigned char)249;
long long int var_11 = 4135383264691874227LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
