#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9828;
unsigned char var_9 = (unsigned char)181;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)87;
int var_14 = -1902545691;
unsigned short var_15 = (unsigned short)5942;
void init() {
}

void checksum() {
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
