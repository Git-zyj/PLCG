#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18341013497918040932ULL;
unsigned short var_13 = (unsigned short)42204;
int zero = 0;
short var_15 = (short)21933;
long long int var_16 = -788995527558666448LL;
unsigned char var_17 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
