#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)28;
unsigned long long int var_17 = 16535252920268199370ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)36549;
unsigned char var_20 = (unsigned char)98;
signed char var_21 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
