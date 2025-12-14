#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31394;
int var_1 = -802495408;
unsigned short var_7 = (unsigned short)33753;
signed char var_9 = (signed char)37;
short var_10 = (short)-19810;
int zero = 0;
unsigned long long int var_12 = 15663388225106467658ULL;
int var_13 = -983137737;
unsigned int var_14 = 729863437U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
