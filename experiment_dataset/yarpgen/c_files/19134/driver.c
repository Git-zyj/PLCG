#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1164;
int var_6 = 1949296530;
long long int var_9 = 4897419831962188013LL;
signed char var_14 = (signed char)-97;
int var_18 = 2090005174;
int zero = 0;
unsigned int var_19 = 905845642U;
short var_20 = (short)27336;
unsigned char var_21 = (unsigned char)167;
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
