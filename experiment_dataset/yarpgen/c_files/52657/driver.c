#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8760014970258522587LL;
signed char var_11 = (signed char)21;
int var_12 = 616649479;
unsigned char var_17 = (unsigned char)209;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)45;
unsigned char var_20 = (unsigned char)208;
int var_21 = 251523767;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
