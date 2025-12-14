#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34139;
unsigned int var_4 = 4229650360U;
unsigned long long int var_11 = 17084236234039842632ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)185;
unsigned int var_13 = 1564458480U;
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
