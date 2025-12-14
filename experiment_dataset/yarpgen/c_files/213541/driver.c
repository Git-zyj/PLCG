#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)60899;
unsigned char var_6 = (unsigned char)22;
unsigned long long int var_11 = 6106354766655824276ULL;
signed char var_16 = (signed char)121;
int zero = 0;
unsigned long long int var_18 = 14505853049129674774ULL;
signed char var_19 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
