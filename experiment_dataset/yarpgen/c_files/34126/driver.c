#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21369;
unsigned short var_6 = (unsigned short)50830;
unsigned long long int var_14 = 15019211772857758331ULL;
int zero = 0;
short var_19 = (short)23177;
unsigned short var_20 = (unsigned short)26121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
