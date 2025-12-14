#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2345863788U;
unsigned int var_4 = 3132460916U;
unsigned long long int var_5 = 7715229875792604248ULL;
short var_6 = (short)-17402;
signed char var_7 = (signed char)-39;
unsigned int var_8 = 203291487U;
signed char var_9 = (signed char)-80;
int zero = 0;
unsigned char var_11 = (unsigned char)137;
signed char var_12 = (signed char)126;
unsigned int var_13 = 777329618U;
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
