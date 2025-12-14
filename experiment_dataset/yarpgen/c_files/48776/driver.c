#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6254041262693445397LL;
int var_1 = -841782955;
unsigned char var_4 = (unsigned char)208;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 2613309033318524361ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 1883020189458698470ULL;
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
