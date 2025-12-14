#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3417444109U;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)4070;
signed char var_9 = (signed char)-97;
signed char var_10 = (signed char)-72;
int zero = 0;
signed char var_11 = (signed char)122;
signed char var_12 = (signed char)-75;
void init() {
}

void checksum() {
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
