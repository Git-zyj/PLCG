#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3982761085265928923ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-79;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)228;
unsigned char var_20 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
