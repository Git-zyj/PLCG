#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9549;
signed char var_4 = (signed char)56;
long long int var_7 = -5492762685466436053LL;
int var_8 = 827999762;
signed char var_9 = (signed char)71;
int zero = 0;
unsigned char var_10 = (unsigned char)91;
long long int var_11 = -1084194475325312380LL;
int var_12 = 1732216048;
unsigned int var_13 = 2674865835U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
