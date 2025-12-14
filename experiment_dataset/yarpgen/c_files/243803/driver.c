#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-35;
long long int var_5 = -5579888634946608991LL;
long long int var_6 = 6382173079684121015LL;
short var_8 = (short)-6147;
unsigned short var_9 = (unsigned short)55239;
unsigned long long int var_10 = 9129364554273435299ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)34962;
signed char var_12 = (signed char)71;
unsigned long long int var_13 = 1527219037313266873ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
