#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1398894179;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 8024771831093015484ULL;
unsigned long long int var_8 = 17222684918656223180ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_16 = 1289062320U;
int zero = 0;
int var_17 = -42117088;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)46287;
int var_20 = 224891583;
unsigned int var_21 = 1708709869U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
