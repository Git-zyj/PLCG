#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 564958138183419168LL;
unsigned char var_2 = (unsigned char)117;
unsigned char var_4 = (unsigned char)157;
signed char var_7 = (signed char)67;
_Bool var_8 = (_Bool)0;
unsigned long long int var_17 = 9593862748057280091ULL;
unsigned char var_19 = (unsigned char)232;
int zero = 0;
unsigned int var_20 = 3399022085U;
signed char var_21 = (signed char)-84;
long long int var_22 = -6305476628394352514LL;
signed char var_23 = (signed char)-26;
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
