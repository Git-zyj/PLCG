#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5574143561380734503ULL;
unsigned char var_4 = (unsigned char)228;
unsigned char var_15 = (unsigned char)141;
int var_16 = -1215645243;
int var_18 = -974788800;
int zero = 0;
int var_20 = 978161976;
signed char var_21 = (signed char)37;
unsigned long long int var_22 = 12926277282458764954ULL;
unsigned char var_23 = (unsigned char)245;
int var_24 = -2111206469;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
