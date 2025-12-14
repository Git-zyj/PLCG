#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27128;
signed char var_3 = (signed char)-118;
unsigned short var_4 = (unsigned short)61915;
int zero = 0;
unsigned long long int var_10 = 1594525099104974787ULL;
short var_11 = (short)-17620;
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
