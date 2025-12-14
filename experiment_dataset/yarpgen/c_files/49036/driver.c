#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1319836881;
int var_3 = 967079620;
long long int var_7 = -1351944018503307949LL;
unsigned long long int var_10 = 7690190830331866745ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)107;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-24559;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
