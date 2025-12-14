#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 11565525395367959235ULL;
_Bool var_5 = (_Bool)0;
int var_7 = -1649246528;
int var_8 = -2000799822;
long long int var_10 = -5563585615571728081LL;
int zero = 0;
unsigned short var_12 = (unsigned short)22996;
unsigned short var_13 = (unsigned short)21692;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)8331;
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
