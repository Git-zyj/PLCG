#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2327173237629937573LL;
unsigned char var_7 = (unsigned char)248;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)46;
unsigned char var_12 = (unsigned char)219;
unsigned char var_16 = (unsigned char)209;
int zero = 0;
unsigned char var_19 = (unsigned char)237;
short var_20 = (short)4703;
unsigned long long int var_21 = 8298699625154392297ULL;
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
