#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6286266254151009858LL;
unsigned char var_1 = (unsigned char)199;
unsigned long long int var_3 = 15387599679393157036ULL;
unsigned char var_5 = (unsigned char)35;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-69;
long long int var_9 = -8526918993961869736LL;
int zero = 0;
signed char var_10 = (signed char)33;
signed char var_11 = (signed char)-53;
_Bool var_12 = (_Bool)1;
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
