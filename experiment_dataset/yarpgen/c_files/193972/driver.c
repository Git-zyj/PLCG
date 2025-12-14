#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)7146;
unsigned long long int var_12 = 11398113944668887980ULL;
unsigned long long int var_14 = 6051483402979753687ULL;
int zero = 0;
unsigned long long int var_18 = 10116618786721073931ULL;
unsigned short var_19 = (unsigned short)14520;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
