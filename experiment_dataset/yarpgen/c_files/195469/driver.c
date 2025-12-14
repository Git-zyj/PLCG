#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6571347439196332824LL;
unsigned char var_3 = (unsigned char)194;
int zero = 0;
unsigned short var_13 = (unsigned short)12356;
unsigned short var_14 = (unsigned short)28502;
unsigned char var_15 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
