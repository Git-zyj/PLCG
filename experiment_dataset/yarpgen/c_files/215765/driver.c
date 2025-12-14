#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6751302096828207779LL;
unsigned int var_7 = 1525946289U;
long long int var_8 = -8814625685075790670LL;
unsigned char var_11 = (unsigned char)37;
int zero = 0;
unsigned short var_13 = (unsigned short)47757;
signed char var_14 = (signed char)-127;
int var_15 = -817167265;
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
