#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)18906;
unsigned short var_3 = (unsigned short)62920;
signed char var_8 = (signed char)-26;
int zero = 0;
int var_13 = -739429015;
unsigned char var_14 = (unsigned char)9;
signed char var_15 = (signed char)-19;
long long int var_16 = -2270151601842960742LL;
unsigned short var_17 = (unsigned short)62748;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
