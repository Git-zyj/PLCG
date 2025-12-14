#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)30037;
int var_8 = 1431107685;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)20;
signed char var_11 = (signed char)-74;
unsigned char var_12 = (unsigned char)76;
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
