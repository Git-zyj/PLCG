#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3581279511U;
unsigned short var_10 = (unsigned short)49144;
long long int var_15 = 2994832957286658055LL;
signed char var_17 = (signed char)-23;
unsigned short var_18 = (unsigned short)5083;
int zero = 0;
signed char var_20 = (signed char)104;
long long int var_21 = 6174650460646436040LL;
long long int var_22 = -8052082748860491402LL;
_Bool var_23 = (_Bool)1;
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
