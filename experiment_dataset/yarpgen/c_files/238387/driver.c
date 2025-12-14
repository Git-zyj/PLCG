#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18719;
unsigned long long int var_3 = 4242780163011620715ULL;
unsigned int var_5 = 2052475225U;
signed char var_8 = (signed char)56;
unsigned int var_9 = 1495147871U;
short var_10 = (short)20716;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)78;
signed char var_13 = (signed char)104;
unsigned char var_14 = (unsigned char)253;
signed char var_15 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
