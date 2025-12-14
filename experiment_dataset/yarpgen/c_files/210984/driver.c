#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-104;
unsigned short var_3 = (unsigned short)52652;
unsigned int var_4 = 46216827U;
long long int var_5 = 5675390205184457019LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -4799063319155282499LL;
unsigned short var_13 = (unsigned short)35670;
int zero = 0;
int var_14 = -1425734041;
int var_15 = 1094009303;
unsigned int var_16 = 2628597662U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
