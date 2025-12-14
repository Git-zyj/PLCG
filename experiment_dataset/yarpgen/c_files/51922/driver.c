#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7264590248744591077ULL;
unsigned int var_17 = 3187518298U;
short var_18 = (short)12580;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)32424;
unsigned char var_22 = (unsigned char)150;
unsigned char var_23 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
