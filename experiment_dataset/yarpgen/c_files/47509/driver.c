#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2103310714;
short var_3 = (short)-11933;
unsigned char var_14 = (unsigned char)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 10836069039507564879ULL;
unsigned char var_21 = (unsigned char)164;
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
