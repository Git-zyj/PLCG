#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16258069571177230067ULL;
unsigned long long int var_4 = 3577223157878470534ULL;
short var_6 = (short)-379;
int zero = 0;
long long int var_10 = 5354840708202203998LL;
unsigned char var_11 = (unsigned char)52;
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
