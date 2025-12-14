#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
long long int var_1 = -928995155831470778LL;
signed char var_4 = (signed char)-38;
_Bool var_5 = (_Bool)0;
int var_6 = 1515856267;
unsigned long long int var_7 = 2657826470606172805ULL;
unsigned int var_8 = 4178046529U;
unsigned long long int var_11 = 3680522797575165161ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)171;
int var_13 = 1527784603;
signed char var_14 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
