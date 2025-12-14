#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4892456321748714071ULL;
unsigned char var_1 = (unsigned char)36;
short var_4 = (short)-14588;
unsigned char var_7 = (unsigned char)98;
int var_8 = -955798099;
int zero = 0;
signed char var_10 = (signed char)-29;
int var_11 = -834614588;
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
