#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 17708889358961075637ULL;
unsigned char var_2 = (unsigned char)81;
unsigned char var_3 = (unsigned char)120;
unsigned short var_9 = (unsigned short)56599;
int zero = 0;
long long int var_11 = 7504162196211977580LL;
int var_12 = 416342663;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3703285671U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
