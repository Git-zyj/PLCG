#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4231;
_Bool var_5 = (_Bool)1;
int var_10 = 848880682;
int var_12 = -1265384592;
int zero = 0;
signed char var_13 = (signed char)33;
_Bool var_14 = (_Bool)1;
int var_15 = -1308040226;
unsigned long long int var_16 = 16841641223011398968ULL;
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
