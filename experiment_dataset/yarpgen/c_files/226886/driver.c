#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
signed char var_1 = (signed char)-43;
unsigned long long int var_7 = 11823700555946289839ULL;
int var_8 = 1864940244;
short var_12 = (short)23851;
long long int var_13 = 512913915618381260LL;
int zero = 0;
unsigned long long int var_16 = 11880574944851432593ULL;
int var_17 = 1472025747;
unsigned int var_18 = 3062557106U;
unsigned int var_19 = 2334461296U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
