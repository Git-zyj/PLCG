#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_10 = (unsigned short)57764;
unsigned long long int var_11 = 5289321390301585534ULL;
unsigned char var_12 = (unsigned char)242;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3118147066U;
signed char var_18 = (signed char)-47;
signed char var_19 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
