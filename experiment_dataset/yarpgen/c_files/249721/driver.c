#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)106;
unsigned int var_12 = 3643557089U;
short var_13 = (short)6936;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 8092596413027418110ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)54913;
unsigned long long int var_18 = 5660890122418085789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
