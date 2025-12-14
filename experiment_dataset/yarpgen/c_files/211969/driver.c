#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_1 = (signed char)-107;
signed char var_5 = (signed char)49;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-21;
unsigned short var_21 = (unsigned short)35287;
short var_22 = (short)-27112;
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
