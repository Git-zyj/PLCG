#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 888204767U;
signed char var_5 = (signed char)-75;
short var_8 = (short)-9402;
unsigned int var_9 = 3297251634U;
unsigned int var_10 = 378118441U;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
unsigned int var_19 = 88154562U;
int var_20 = 1993079553;
signed char var_21 = (signed char)91;
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
