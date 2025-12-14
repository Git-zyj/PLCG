#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
signed char var_6 = (signed char)-93;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)135;
unsigned char var_13 = (unsigned char)52;
int var_14 = 642732599;
unsigned char var_15 = (unsigned char)214;
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
