#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 525011496U;
unsigned int var_1 = 3559214240U;
unsigned short var_4 = (unsigned short)15628;
unsigned char var_5 = (unsigned char)13;
int zero = 0;
short var_13 = (short)7357;
unsigned long long int var_14 = 173185815971816497ULL;
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
