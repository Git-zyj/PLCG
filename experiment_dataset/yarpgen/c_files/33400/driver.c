#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6335;
unsigned long long int var_1 = 3075993865304221991ULL;
unsigned long long int var_2 = 5801926027171327204ULL;
short var_5 = (short)9163;
int zero = 0;
int var_10 = 595713495;
int var_11 = -1591435591;
unsigned short var_12 = (unsigned short)55555;
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
