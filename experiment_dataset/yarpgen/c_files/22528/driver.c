#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
signed char var_6 = (signed char)-121;
short var_7 = (short)-22939;
unsigned long long int var_9 = 1777897521489018383ULL;
unsigned long long int var_10 = 13368488155377272113ULL;
int zero = 0;
long long int var_11 = -5977547971269091563LL;
signed char var_12 = (signed char)-45;
void init() {
}

void checksum() {
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
