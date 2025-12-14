#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-75;
signed char var_10 = (signed char)-69;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)27;
signed char var_21 = (signed char)-74;
unsigned short var_22 = (unsigned short)4913;
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
