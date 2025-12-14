#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27977;
long long int var_9 = -1990404257795516918LL;
unsigned long long int var_12 = 9601077341488793612ULL;
unsigned short var_13 = (unsigned short)43994;
unsigned short var_17 = (unsigned short)30148;
unsigned long long int var_19 = 4305161095461361498ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)8372;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
