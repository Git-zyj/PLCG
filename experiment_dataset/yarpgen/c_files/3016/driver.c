#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)47;
_Bool var_2 = (_Bool)1;
int var_5 = 481380417;
unsigned short var_6 = (unsigned short)38864;
int var_9 = -281908924;
unsigned short var_12 = (unsigned short)32210;
int zero = 0;
unsigned int var_13 = 1967795397U;
signed char var_14 = (signed char)-49;
unsigned char var_15 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
