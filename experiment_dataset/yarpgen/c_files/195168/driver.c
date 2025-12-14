#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
int var_4 = 1566698487;
long long int var_7 = 3495583525555344015LL;
unsigned int var_9 = 3809629239U;
unsigned char var_10 = (unsigned char)182;
long long int var_11 = -6046914686888721403LL;
unsigned long long int var_18 = 16223664322943976334ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)103;
short var_20 = (short)-2103;
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
