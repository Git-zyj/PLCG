#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 841371020U;
signed char var_4 = (signed char)-85;
short var_5 = (short)8873;
unsigned char var_6 = (unsigned char)85;
signed char var_10 = (signed char)-108;
int zero = 0;
unsigned char var_19 = (unsigned char)56;
short var_20 = (short)10963;
unsigned long long int var_21 = 10562635443402463748ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
