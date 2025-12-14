#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21962;
short var_3 = (short)2590;
long long int var_5 = 1568540934968616878LL;
short var_7 = (short)-26204;
unsigned int var_18 = 1744709592U;
int zero = 0;
short var_19 = (short)-428;
unsigned long long int var_20 = 11368372265150040950ULL;
short var_21 = (short)-30451;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
