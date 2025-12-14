#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
signed char var_13 = (signed char)-127;
int zero = 0;
unsigned long long int var_19 = 9894899803291239629ULL;
signed char var_20 = (signed char)100;
long long int var_21 = 816537192673289989LL;
long long int var_22 = -4779630515091781834LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
