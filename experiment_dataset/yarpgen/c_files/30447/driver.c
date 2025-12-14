#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2088208453;
unsigned long long int var_4 = 13141390584375360851ULL;
unsigned long long int var_6 = 609435435729954303ULL;
signed char var_7 = (signed char)-103;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)11612;
int zero = 0;
unsigned long long int var_11 = 9866195046829014903ULL;
unsigned int var_12 = 810607460U;
void init() {
}

void checksum() {
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
