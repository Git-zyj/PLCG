#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-7581;
unsigned int var_6 = 3991414559U;
unsigned long long int var_7 = 18104126989761417301ULL;
unsigned int var_8 = 1143748587U;
int var_9 = 1141713852;
int zero = 0;
short var_13 = (short)8974;
short var_14 = (short)18626;
long long int var_15 = 6044302080440649468LL;
unsigned long long int var_16 = 3798822816306492462ULL;
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
