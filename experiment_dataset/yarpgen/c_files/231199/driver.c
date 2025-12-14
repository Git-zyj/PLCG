#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5653903409282965728LL;
int var_8 = 456316029;
unsigned short var_11 = (unsigned short)55255;
int zero = 0;
short var_13 = (short)-14704;
signed char var_14 = (signed char)-23;
int var_15 = 249864057;
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
