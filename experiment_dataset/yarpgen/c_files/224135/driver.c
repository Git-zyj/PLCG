#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned int var_4 = 2172988007U;
signed char var_8 = (signed char)118;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)213;
unsigned short var_11 = (unsigned short)18072;
int zero = 0;
unsigned short var_12 = (unsigned short)58106;
long long int var_13 = -857079202140445049LL;
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
