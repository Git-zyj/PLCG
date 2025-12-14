#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)92;
unsigned short var_5 = (unsigned short)59557;
unsigned long long int var_11 = 13669474423769795277ULL;
long long int var_13 = 8553778008481145516LL;
int zero = 0;
signed char var_17 = (signed char)-36;
unsigned int var_18 = 1317090257U;
unsigned char var_19 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
