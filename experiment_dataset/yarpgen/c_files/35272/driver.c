#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8126;
unsigned short var_1 = (unsigned short)32285;
unsigned long long int var_3 = 13761334614952881353ULL;
int var_7 = 828487733;
int zero = 0;
signed char var_10 = (signed char)-67;
unsigned long long int var_11 = 17105145791301968744ULL;
unsigned int var_12 = 3891512687U;
unsigned short var_13 = (unsigned short)23464;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
