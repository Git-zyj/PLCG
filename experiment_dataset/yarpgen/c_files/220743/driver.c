#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)206;
_Bool var_3 = (_Bool)1;
short var_6 = (short)25951;
unsigned char var_8 = (unsigned char)97;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 876714906U;
short var_17 = (short)862;
unsigned int var_18 = 3007445109U;
short var_19 = (short)18779;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
