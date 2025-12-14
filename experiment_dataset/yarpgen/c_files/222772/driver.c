#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19668;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)4511;
int zero = 0;
unsigned int var_10 = 2983106133U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)17;
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
