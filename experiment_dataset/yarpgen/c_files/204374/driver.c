#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27040;
_Bool var_7 = (_Bool)0;
short var_8 = (short)2094;
unsigned char var_9 = (unsigned char)108;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15613606409069136304ULL;
signed char var_21 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
