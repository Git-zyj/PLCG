#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)239;
unsigned long long int var_9 = 12970947934566153193ULL;
unsigned short var_11 = (unsigned short)61580;
int zero = 0;
signed char var_13 = (signed char)-78;
unsigned long long int var_14 = 15390765406949717916ULL;
unsigned short var_15 = (unsigned short)55368;
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
