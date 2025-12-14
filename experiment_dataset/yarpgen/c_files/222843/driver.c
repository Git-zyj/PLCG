#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
long long int var_6 = 3394769551986888614LL;
unsigned char var_8 = (unsigned char)148;
int zero = 0;
unsigned int var_11 = 173006801U;
unsigned short var_12 = (unsigned short)23679;
signed char var_13 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
