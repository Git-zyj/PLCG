#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1847219920;
unsigned short var_8 = (unsigned short)64781;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)3;
signed char var_12 = (signed char)-101;
unsigned int var_13 = 3161305759U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
