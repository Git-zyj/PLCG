#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1912;
unsigned char var_4 = (unsigned char)136;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)13;
int zero = 0;
unsigned char var_10 = (unsigned char)251;
unsigned long long int var_11 = 4269233010399910763ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
