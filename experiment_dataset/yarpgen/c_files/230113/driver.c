#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8455;
unsigned int var_7 = 504108063U;
unsigned long long int var_8 = 10086334390381910240ULL;
unsigned char var_9 = (unsigned char)203;
unsigned int var_10 = 3139432952U;
signed char var_12 = (signed char)-41;
unsigned char var_18 = (unsigned char)79;
int zero = 0;
int var_20 = 564914962;
unsigned int var_21 = 1343772274U;
unsigned int var_22 = 1080299347U;
short var_23 = (short)15711;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
