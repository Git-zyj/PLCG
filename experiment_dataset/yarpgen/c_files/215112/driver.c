#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned int var_1 = 1727952208U;
int var_2 = 1234481516;
int var_9 = -769615315;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-96;
unsigned short var_12 = (unsigned short)34492;
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
