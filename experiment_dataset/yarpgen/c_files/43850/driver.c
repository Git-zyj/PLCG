#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16119;
unsigned char var_5 = (unsigned char)169;
long long int var_6 = -3723092418168705839LL;
int zero = 0;
long long int var_10 = 339089678601787375LL;
int var_11 = -803075567;
unsigned int var_12 = 505850986U;
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
