#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)218;
unsigned short var_5 = (unsigned short)12861;
int var_7 = -2086210241;
long long int var_12 = 1496762803488656420LL;
int var_16 = 970326874;
int zero = 0;
unsigned long long int var_17 = 5529485703700627875ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-127;
void init() {
}

void checksum() {
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
