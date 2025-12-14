#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1256371129U;
unsigned int var_7 = 1884710833U;
unsigned short var_8 = (unsigned short)42441;
unsigned char var_9 = (unsigned char)105;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)4417;
short var_12 = (short)-3961;
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
