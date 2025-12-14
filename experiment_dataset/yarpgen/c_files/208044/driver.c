#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22086;
unsigned long long int var_1 = 14850554028764825651ULL;
short var_3 = (short)-16622;
int zero = 0;
short var_14 = (short)-17650;
short var_15 = (short)-26974;
int var_16 = 1261315850;
short var_17 = (short)-27697;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
