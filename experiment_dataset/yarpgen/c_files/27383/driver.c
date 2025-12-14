#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11896349905172753130ULL;
unsigned int var_4 = 3805605752U;
signed char var_6 = (signed char)-49;
short var_8 = (short)-21898;
signed char var_12 = (signed char)82;
unsigned long long int var_13 = 9537625610287368378ULL;
unsigned int var_15 = 3403273921U;
signed char var_16 = (signed char)72;
int zero = 0;
unsigned short var_19 = (unsigned short)13277;
signed char var_20 = (signed char)106;
unsigned short var_21 = (unsigned short)53454;
signed char var_22 = (signed char)-67;
unsigned short var_23 = (unsigned short)58307;
unsigned int var_24 = 3785918311U;
long long int var_25 = 810033284727753284LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
