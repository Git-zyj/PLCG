#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -344054294;
long long int var_4 = 6374544674759904132LL;
long long int var_9 = -3041452372048983449LL;
int var_11 = -1676854454;
int var_13 = 515366899;
int var_14 = 1140721215;
signed char var_17 = (signed char)-17;
int var_18 = -1700230323;
int zero = 0;
int var_19 = 1700981270;
int var_20 = 2093672951;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
