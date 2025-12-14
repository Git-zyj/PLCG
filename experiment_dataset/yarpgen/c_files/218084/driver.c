#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14576;
long long int var_6 = 6752455183939458117LL;
unsigned short var_8 = (unsigned short)5699;
int zero = 0;
short var_20 = (short)3926;
unsigned int var_21 = 4073748814U;
long long int var_22 = -37973719045184926LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
