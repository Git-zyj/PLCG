#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-5;
unsigned long long int var_4 = 16505520663635496556ULL;
unsigned int var_6 = 1527526704U;
signed char var_12 = (signed char)45;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)12206;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 1564755912;
unsigned short var_21 = (unsigned short)9937;
int var_22 = -565314959;
int var_23 = -1730129812;
unsigned int var_24 = 3949929839U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
