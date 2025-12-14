#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)32729;
long long int var_8 = -77552850627089461LL;
int var_9 = -52954606;
int var_10 = 104430325;
unsigned char var_13 = (unsigned char)241;
int var_14 = 1025079419;
int zero = 0;
int var_20 = -835144934;
unsigned int var_21 = 1235274658U;
void init() {
}

void checksum() {
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
