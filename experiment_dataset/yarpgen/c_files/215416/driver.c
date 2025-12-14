#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12230;
unsigned char var_4 = (unsigned char)150;
unsigned int var_6 = 4155679851U;
int zero = 0;
unsigned long long int var_12 = 3052539985310941830ULL;
unsigned long long int var_13 = 18419550936744105522ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
