#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 624987050;
unsigned long long int var_5 = 2291659219443016840ULL;
unsigned short var_7 = (unsigned short)19528;
short var_8 = (short)346;
unsigned long long int var_10 = 16590362846674909646ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)7261;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)58;
short var_19 = (short)32178;
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
