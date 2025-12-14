#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1061448222U;
unsigned long long int var_5 = 211936115194728210ULL;
unsigned long long int var_10 = 12627858046195614159ULL;
unsigned long long int var_12 = 10598945378350433128ULL;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 10375696174662280809ULL;
long long int var_20 = 5546480970326735229LL;
unsigned int var_21 = 3562376064U;
signed char var_22 = (signed char)-79;
unsigned char var_23 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
