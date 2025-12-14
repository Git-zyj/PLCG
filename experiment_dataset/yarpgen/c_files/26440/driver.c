#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
int var_6 = -223124301;
unsigned char var_11 = (unsigned char)104;
unsigned long long int var_13 = 11478305963568805888ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)33618;
unsigned long long int var_15 = 14948121413254174163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
