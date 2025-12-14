#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3577365006U;
unsigned int var_5 = 2895633116U;
unsigned char var_7 = (unsigned char)19;
unsigned int var_9 = 2127407388U;
unsigned int var_10 = 3680928350U;
long long int var_11 = -3219100292829393595LL;
unsigned char var_12 = (unsigned char)101;
int zero = 0;
unsigned int var_13 = 2575874737U;
short var_14 = (short)28680;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 7898019945565892570ULL;
signed char var_17 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
