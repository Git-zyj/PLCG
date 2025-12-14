#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4139204756884901702ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-96;
unsigned short var_10 = (unsigned short)57439;
int zero = 0;
short var_11 = (short)12170;
signed char var_12 = (signed char)-35;
unsigned int var_13 = 3754209723U;
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
