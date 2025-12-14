#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)81;
signed char var_5 = (signed char)86;
signed char var_7 = (signed char)78;
unsigned long long int var_8 = 13459113257075526079ULL;
unsigned char var_10 = (unsigned char)193;
int zero = 0;
unsigned int var_12 = 1812669731U;
unsigned long long int var_13 = 12287275847795995039ULL;
void init() {
}

void checksum() {
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
