#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 704920851;
int var_7 = 972765120;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)112;
unsigned short var_13 = (unsigned short)62754;
signed char var_14 = (signed char)83;
unsigned char var_15 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
