#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12751855020070103692ULL;
unsigned short var_6 = (unsigned short)27087;
unsigned int var_11 = 1728397802U;
int zero = 0;
unsigned int var_14 = 3314780943U;
signed char var_15 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
