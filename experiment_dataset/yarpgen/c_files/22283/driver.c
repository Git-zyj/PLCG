#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20594;
unsigned long long int var_7 = 10556215180210851671ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 4493908124144020952ULL;
int zero = 0;
long long int var_12 = -2288768478688349192LL;
unsigned short var_13 = (unsigned short)37130;
void init() {
}

void checksum() {
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
