#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
unsigned long long int var_2 = 1017282835302462502ULL;
short var_6 = (short)26553;
unsigned char var_9 = (unsigned char)226;
int zero = 0;
short var_10 = (short)17735;
long long int var_11 = 2464948440936927958LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
