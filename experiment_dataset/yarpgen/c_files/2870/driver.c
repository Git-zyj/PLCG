#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1909126737;
unsigned long long int var_2 = 6087503574768441031ULL;
short var_8 = (short)-2918;
unsigned short var_10 = (unsigned short)12794;
unsigned long long int var_11 = 5478833384156550609ULL;
int zero = 0;
unsigned long long int var_13 = 13003669269796839941ULL;
unsigned short var_14 = (unsigned short)7126;
short var_15 = (short)148;
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
