#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
unsigned char var_4 = (unsigned char)6;
long long int var_6 = 5096331835369170611LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -9015486584971018328LL;
long long int var_11 = -4729551486882809497LL;
int zero = 0;
int var_12 = 166162098;
unsigned long long int var_13 = 1750147491020699248ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
