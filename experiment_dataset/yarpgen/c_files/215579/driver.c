#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8661159484188726535ULL;
long long int var_8 = -1444785417652700100LL;
unsigned int var_12 = 3287386384U;
unsigned char var_13 = (unsigned char)126;
unsigned int var_16 = 1294035790U;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-97;
unsigned int var_21 = 3119840952U;
unsigned char var_22 = (unsigned char)207;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
