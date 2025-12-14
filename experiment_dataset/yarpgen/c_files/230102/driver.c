#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned char var_2 = (unsigned char)16;
unsigned int var_3 = 3777104428U;
short var_4 = (short)32515;
signed char var_5 = (signed char)-65;
unsigned char var_9 = (unsigned char)126;
int zero = 0;
signed char var_10 = (signed char)-57;
signed char var_11 = (signed char)49;
short var_12 = (short)21455;
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
