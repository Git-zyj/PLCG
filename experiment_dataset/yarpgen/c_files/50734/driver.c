#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -321181771898632209LL;
signed char var_2 = (signed char)(-127 - 1);
long long int var_3 = 4733679935133655603LL;
int var_4 = 2144969077;
long long int var_8 = 929942082990515022LL;
int zero = 0;
short var_11 = (short)15881;
signed char var_12 = (signed char)-94;
unsigned int var_13 = 267783653U;
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
