#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
unsigned char var_2 = (unsigned char)39;
_Bool var_4 = (_Bool)0;
int var_8 = -2027228503;
unsigned char var_9 = (unsigned char)185;
unsigned char var_10 = (unsigned char)251;
int zero = 0;
int var_13 = 276832254;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
