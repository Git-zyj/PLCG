#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14300;
unsigned int var_4 = 1792339327U;
unsigned char var_5 = (unsigned char)161;
short var_7 = (short)19392;
unsigned long long int var_10 = 4893281691233406948ULL;
int zero = 0;
unsigned long long int var_12 = 14731546282607703953ULL;
unsigned short var_13 = (unsigned short)14273;
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
