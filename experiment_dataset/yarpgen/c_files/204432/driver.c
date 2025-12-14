#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48647;
long long int var_4 = 3514834947133992732LL;
short var_8 = (short)1255;
int zero = 0;
unsigned long long int var_10 = 1117522432293810627ULL;
short var_11 = (short)-22479;
unsigned short var_12 = (unsigned short)47662;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
