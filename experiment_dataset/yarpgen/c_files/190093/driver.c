#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -8018580214388903262LL;
short var_3 = (short)-4986;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)8656;
signed char var_9 = (signed char)76;
signed char var_10 = (signed char)-44;
unsigned short var_11 = (unsigned short)9136;
int zero = 0;
signed char var_12 = (signed char)45;
int var_13 = 1477985317;
signed char var_14 = (signed char)52;
unsigned long long int var_15 = 14484481491868573355ULL;
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
