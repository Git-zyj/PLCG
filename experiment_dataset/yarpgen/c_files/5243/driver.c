#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8958;
short var_2 = (short)-7159;
unsigned long long int var_3 = 11577810466732105763ULL;
unsigned int var_5 = 3811295633U;
_Bool var_6 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-75;
unsigned short var_11 = (unsigned short)32851;
signed char var_12 = (signed char)-116;
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
