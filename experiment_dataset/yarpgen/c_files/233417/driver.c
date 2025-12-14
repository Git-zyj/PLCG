#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12702746996485227497ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 4556182205689772655ULL;
unsigned char var_8 = (unsigned char)4;
unsigned int var_11 = 3675144156U;
signed char var_15 = (signed char)-81;
int zero = 0;
unsigned short var_18 = (unsigned short)51984;
unsigned long long int var_19 = 12968156696011001425ULL;
signed char var_20 = (signed char)-4;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
