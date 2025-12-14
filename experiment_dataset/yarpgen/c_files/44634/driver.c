#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 13801454005122777223ULL;
short var_6 = (short)-27632;
short var_10 = (short)17373;
int zero = 0;
signed char var_11 = (signed char)-126;
unsigned char var_12 = (unsigned char)151;
unsigned char var_13 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
