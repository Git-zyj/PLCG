#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4657644026548470823ULL;
unsigned short var_4 = (unsigned short)3103;
int zero = 0;
unsigned char var_10 = (unsigned char)77;
int var_11 = -1236912437;
unsigned short var_12 = (unsigned short)4838;
unsigned short var_13 = (unsigned short)58625;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
