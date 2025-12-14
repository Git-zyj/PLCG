#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1381783550886886758ULL;
signed char var_4 = (signed char)-50;
int zero = 0;
unsigned char var_10 = (unsigned char)81;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4919986363983821196LL;
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
