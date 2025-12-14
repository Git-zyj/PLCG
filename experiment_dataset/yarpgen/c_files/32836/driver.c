#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1997524273U;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)15640;
int zero = 0;
unsigned char var_18 = (unsigned char)91;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
