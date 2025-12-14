#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5999007649239834509ULL;
unsigned long long int var_8 = 1564300902641750780ULL;
long long int var_13 = 935137828646577600LL;
int zero = 0;
short var_20 = (short)20205;
long long int var_21 = -6109929821837234740LL;
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
