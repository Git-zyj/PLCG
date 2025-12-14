#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned char var_1 = (unsigned char)240;
unsigned long long int var_2 = 10923899910861707486ULL;
unsigned short var_4 = (unsigned short)23709;
unsigned long long int var_7 = 10145302903231141624ULL;
short var_9 = (short)-214;
unsigned long long int var_10 = 8661614726836142609ULL;
int zero = 0;
long long int var_11 = -6430161806303179146LL;
signed char var_12 = (signed char)17;
unsigned char var_13 = (unsigned char)16;
unsigned char var_14 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
