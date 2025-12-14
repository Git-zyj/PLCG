#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17845583690455313576ULL;
unsigned short var_2 = (unsigned short)54252;
unsigned short var_5 = (unsigned short)38998;
short var_8 = (short)4628;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)161;
int zero = 0;
signed char var_12 = (signed char)-3;
unsigned int var_13 = 3536599316U;
signed char var_14 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
