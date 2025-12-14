#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40437;
int var_7 = 1913641236;
signed char var_9 = (signed char)-122;
short var_11 = (short)4402;
int var_12 = 1012116526;
unsigned long long int var_14 = 5879343746456999254ULL;
short var_16 = (short)28262;
int zero = 0;
unsigned short var_18 = (unsigned short)38800;
short var_19 = (short)23544;
_Bool var_20 = (_Bool)1;
int var_21 = -1831817325;
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
