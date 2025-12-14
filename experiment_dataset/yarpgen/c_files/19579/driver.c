#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2748437158U;
long long int var_3 = -5271221161642716677LL;
unsigned char var_5 = (unsigned char)246;
long long int var_6 = -5073282676875104923LL;
signed char var_10 = (signed char)111;
unsigned long long int var_11 = 16873560712018409967ULL;
int zero = 0;
short var_12 = (short)-25844;
short var_13 = (short)30340;
short var_14 = (short)23868;
unsigned long long int var_15 = 2337359088718449287ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
