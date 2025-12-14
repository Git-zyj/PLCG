#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
signed char var_1 = (signed char)-26;
short var_2 = (short)13662;
unsigned char var_7 = (unsigned char)58;
unsigned short var_8 = (unsigned short)30013;
unsigned short var_9 = (unsigned short)31128;
int zero = 0;
long long int var_11 = -2622761142453760922LL;
int var_12 = -289238218;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
