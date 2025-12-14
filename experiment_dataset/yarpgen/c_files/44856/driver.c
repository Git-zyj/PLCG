#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3897279824U;
long long int var_6 = -2646226246546056442LL;
int var_8 = 1752728826;
unsigned char var_9 = (unsigned char)127;
int zero = 0;
long long int var_12 = -8020711140280112074LL;
_Bool var_13 = (_Bool)1;
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
