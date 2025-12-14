#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31145;
int var_2 = -1177863792;
unsigned char var_5 = (unsigned char)228;
unsigned int var_6 = 2899666506U;
unsigned long long int var_10 = 12683899123606663093ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)38944;
long long int var_15 = -1537440330430232729LL;
unsigned long long int var_16 = 11459663342828517639ULL;
unsigned short var_17 = (unsigned short)54144;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)42;
unsigned char var_22 = (unsigned char)39;
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
