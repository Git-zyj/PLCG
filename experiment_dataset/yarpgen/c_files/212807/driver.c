#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1971848608;
signed char var_5 = (signed char)109;
unsigned char var_6 = (unsigned char)93;
unsigned short var_11 = (unsigned short)11476;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)72;
void init() {
}

void checksum() {
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
