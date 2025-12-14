#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21542;
unsigned int var_2 = 937409632U;
unsigned short var_4 = (unsigned short)22591;
unsigned long long int var_6 = 9486840767829569638ULL;
signed char var_10 = (signed char)-80;
unsigned short var_11 = (unsigned short)57944;
int var_14 = 575920770;
int var_15 = 1450422109;
int zero = 0;
unsigned int var_16 = 960053787U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12997282092895042881ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
