#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16082527968150054036ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)93;
unsigned int var_11 = 554650205U;
int zero = 0;
unsigned char var_20 = (unsigned char)74;
unsigned long long int var_21 = 9075262989428356609ULL;
short var_22 = (short)20908;
void init() {
}

void checksum() {
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
