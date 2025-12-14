#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
unsigned int var_2 = 3574625791U;
_Bool var_5 = (_Bool)0;
long long int var_9 = 1093734873274687404LL;
long long int var_11 = -9170757698987507815LL;
int zero = 0;
unsigned char var_15 = (unsigned char)46;
short var_16 = (short)27561;
unsigned int var_17 = 4027087946U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
