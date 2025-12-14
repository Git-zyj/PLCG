#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45735;
unsigned int var_3 = 1221881412U;
signed char var_6 = (signed char)-102;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-75;
int zero = 0;
signed char var_13 = (signed char)-15;
signed char var_14 = (signed char)81;
void init() {
}

void checksum() {
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
