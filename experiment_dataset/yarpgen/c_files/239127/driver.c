#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)20;
unsigned int var_3 = 232645758U;
signed char var_5 = (signed char)124;
long long int var_13 = -6125677285311905197LL;
int zero = 0;
unsigned long long int var_20 = 2024286494601363041ULL;
unsigned char var_21 = (unsigned char)104;
short var_22 = (short)-1000;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
