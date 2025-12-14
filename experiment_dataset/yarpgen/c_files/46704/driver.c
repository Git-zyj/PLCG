#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)60;
short var_3 = (short)5842;
unsigned int var_6 = 1555465104U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3851781643U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3824284067U;
int var_12 = -1051478298;
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
