#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
short var_1 = (short)-3678;
signed char var_3 = (signed char)-2;
unsigned long long int var_5 = 6765408588077673750ULL;
signed char var_7 = (signed char)-83;
signed char var_10 = (signed char)76;
unsigned long long int var_11 = 1666614045067064444ULL;
int zero = 0;
int var_13 = 32454250;
long long int var_14 = -6894828401780315593LL;
unsigned char var_15 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
