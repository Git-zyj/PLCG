#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1605275648;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)40640;
signed char var_12 = (signed char)-30;
int zero = 0;
long long int var_16 = 3932330397857474196LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
