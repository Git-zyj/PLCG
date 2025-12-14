#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42227;
unsigned long long int var_3 = 17967640406102525409ULL;
unsigned char var_8 = (unsigned char)196;
unsigned int var_9 = 2666188093U;
unsigned long long int var_12 = 6559825346198503640ULL;
unsigned int var_14 = 210872612U;
int zero = 0;
signed char var_17 = (signed char)-78;
signed char var_18 = (signed char)80;
short var_19 = (short)-29533;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
