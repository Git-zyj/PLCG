#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16983;
int var_4 = 1078825480;
long long int var_10 = -403746089099569338LL;
short var_16 = (short)-16212;
unsigned char var_18 = (unsigned char)86;
int zero = 0;
int var_19 = -935590388;
unsigned long long int var_20 = 12087553868656940786ULL;
short var_21 = (short)-1875;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
