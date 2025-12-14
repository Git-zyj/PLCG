#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5635885445489757534LL;
unsigned int var_5 = 3238007621U;
unsigned int var_7 = 1651649148U;
signed char var_10 = (signed char)-79;
int var_13 = 1446472202;
int zero = 0;
long long int var_14 = -7572738002075238646LL;
long long int var_15 = 1938173436254383268LL;
_Bool var_16 = (_Bool)0;
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
