#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-13;
unsigned short var_3 = (unsigned short)49687;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 16216747008454983670ULL;
int zero = 0;
int var_13 = 1003071513;
int var_14 = 605913097;
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
