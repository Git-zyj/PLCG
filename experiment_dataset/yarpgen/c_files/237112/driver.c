#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 275850227U;
unsigned long long int var_9 = 15795668832788498428ULL;
long long int var_10 = 2838774875785484865LL;
int zero = 0;
unsigned short var_11 = (unsigned short)14151;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
