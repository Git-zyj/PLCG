#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-127;
unsigned char var_9 = (unsigned char)190;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = 7165845810654070906LL;
unsigned short var_15 = (unsigned short)19601;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
