#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
int var_2 = -1175814441;
short var_4 = (short)28244;
int var_9 = 1839174478;
short var_10 = (short)-14281;
int zero = 0;
short var_11 = (short)-27960;
short var_12 = (short)-29740;
short var_13 = (short)661;
short var_14 = (short)-18011;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
