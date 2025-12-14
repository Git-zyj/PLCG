#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10005543424000090334ULL;
int var_5 = 975264372;
_Bool var_8 = (_Bool)0;
long long int var_14 = 2157308409825603180LL;
unsigned long long int var_15 = 13670341881305506318ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)214;
int var_17 = 636011672;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
