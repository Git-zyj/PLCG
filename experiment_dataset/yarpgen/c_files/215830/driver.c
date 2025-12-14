#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 1132511017653204910ULL;
short var_9 = (short)10140;
long long int var_12 = -7890861753799306842LL;
signed char var_13 = (signed char)-12;
int zero = 0;
unsigned short var_17 = (unsigned short)15099;
short var_18 = (short)25796;
void init() {
}

void checksum() {
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
