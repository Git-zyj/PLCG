#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2295064903423740241LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 15505430888840029863ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 9580132280673615131ULL;
unsigned short var_18 = (unsigned short)34971;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 375613754U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
