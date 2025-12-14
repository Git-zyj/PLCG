#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)63;
short var_6 = (short)-30339;
int var_8 = 1095492292;
int var_9 = 1757826077;
int zero = 0;
unsigned long long int var_11 = 10796894030853580246ULL;
unsigned char var_12 = (unsigned char)182;
unsigned int var_13 = 3346720244U;
unsigned int var_14 = 4289042012U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
