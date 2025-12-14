#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-13;
unsigned int var_4 = 2116940548U;
unsigned int var_6 = 2033841130U;
unsigned char var_7 = (unsigned char)73;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)86;
int zero = 0;
short var_16 = (short)5066;
int var_17 = -1757116461;
unsigned char var_18 = (unsigned char)112;
unsigned int var_19 = 2120739864U;
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
