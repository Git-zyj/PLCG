#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3999039945434434581LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 4009531160U;
unsigned short var_10 = (unsigned short)33640;
int zero = 0;
unsigned long long int var_11 = 8989092630704123151ULL;
unsigned short var_12 = (unsigned short)15698;
int var_13 = 1512812322;
int var_14 = -1821206276;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
