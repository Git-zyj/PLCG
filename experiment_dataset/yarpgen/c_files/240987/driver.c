#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20525;
_Bool var_2 = (_Bool)0;
unsigned char var_15 = (unsigned char)216;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)22478;
unsigned char var_20 = (unsigned char)107;
unsigned long long int var_21 = 11945640286124921214ULL;
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
