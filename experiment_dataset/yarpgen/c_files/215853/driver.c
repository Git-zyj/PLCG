#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35621;
_Bool var_4 = (_Bool)1;
long long int var_17 = 4538647027538486429LL;
int zero = 0;
long long int var_18 = 3675163095944428230LL;
unsigned short var_19 = (unsigned short)1830;
short var_20 = (short)25571;
unsigned char var_21 = (unsigned char)240;
int var_22 = 862426311;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
