#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
signed char var_2 = (signed char)13;
int var_6 = -1827458055;
int var_7 = -1276327316;
short var_8 = (short)12678;
int zero = 0;
unsigned char var_12 = (unsigned char)38;
short var_13 = (short)21194;
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
