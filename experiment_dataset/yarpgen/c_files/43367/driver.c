#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1606902231U;
unsigned short var_6 = (unsigned short)40149;
unsigned int var_9 = 1765283779U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)60709;
unsigned short var_13 = (unsigned short)30747;
int zero = 0;
unsigned char var_20 = (unsigned char)147;
signed char var_21 = (signed char)-126;
unsigned long long int var_22 = 11012243339343436248ULL;
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
