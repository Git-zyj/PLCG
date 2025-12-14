#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1842806964104337656LL;
signed char var_3 = (signed char)-11;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 380455876706713327ULL;
int var_7 = -1398152543;
unsigned int var_8 = 1581432874U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)29;
unsigned long long int var_15 = 5089534720951647259ULL;
int var_16 = 1562011848;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
