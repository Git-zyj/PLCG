#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1756139827230399525LL;
signed char var_3 = (signed char)-31;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2445562703U;
_Bool var_7 = (_Bool)1;
int var_9 = -1301134157;
long long int var_12 = -6397477454860697403LL;
_Bool var_17 = (_Bool)0;
short var_19 = (short)1166;
int zero = 0;
unsigned short var_20 = (unsigned short)63695;
unsigned short var_21 = (unsigned short)31111;
long long int var_22 = 6159804791483395693LL;
signed char var_23 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
