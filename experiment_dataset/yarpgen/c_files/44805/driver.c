#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_11 = (unsigned char)209;
unsigned long long int var_19 = 10047667986787595555ULL;
int zero = 0;
signed char var_20 = (signed char)62;
unsigned long long int var_21 = 2330883463330363182ULL;
unsigned short var_22 = (unsigned short)41361;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
