#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
long long int var_10 = 3851548837450222347LL;
unsigned short var_11 = (unsigned short)23011;
unsigned short var_13 = (unsigned short)59875;
int zero = 0;
signed char var_19 = (signed char)-84;
long long int var_20 = 4833941345247459172LL;
unsigned long long int var_21 = 13416161695072736467ULL;
void init() {
}

void checksum() {
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
