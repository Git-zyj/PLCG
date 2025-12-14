#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
int var_3 = 1746922474;
short var_6 = (short)23072;
unsigned short var_8 = (unsigned short)38025;
unsigned short var_9 = (unsigned short)61606;
signed char var_10 = (signed char)-115;
int zero = 0;
short var_12 = (short)21886;
unsigned int var_13 = 1624086817U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
