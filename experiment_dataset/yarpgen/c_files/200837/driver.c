#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-126;
signed char var_3 = (signed char)53;
unsigned char var_5 = (unsigned char)69;
unsigned char var_6 = (unsigned char)206;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 2233785936255188659LL;
unsigned char var_12 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
