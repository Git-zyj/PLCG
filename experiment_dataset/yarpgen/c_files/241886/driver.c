#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)168;
unsigned long long int var_8 = 8597783267244884061ULL;
unsigned long long int var_12 = 11874935382922306497ULL;
int zero = 0;
short var_13 = (short)-27013;
unsigned long long int var_14 = 10483334156808008975ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
