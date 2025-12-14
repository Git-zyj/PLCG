#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)213;
signed char var_4 = (signed char)-71;
unsigned long long int var_6 = 6375337845347772826ULL;
unsigned char var_7 = (unsigned char)225;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-31673;
signed char var_12 = (signed char)-76;
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
