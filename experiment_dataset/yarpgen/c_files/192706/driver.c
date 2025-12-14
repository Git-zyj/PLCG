#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)23;
int var_4 = -1699458796;
signed char var_6 = (signed char)70;
long long int var_8 = 8759640632653197041LL;
unsigned char var_10 = (unsigned char)140;
unsigned char var_11 = (unsigned char)138;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-57;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)9927;
signed char var_21 = (signed char)24;
unsigned long long int var_22 = 1282505195287472993ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
