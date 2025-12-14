#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
short var_1 = (short)29525;
int var_5 = -1753724642;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 2449994367209222303ULL;
long long int var_9 = -4767800738093199874LL;
unsigned char var_12 = (unsigned char)163;
unsigned short var_13 = (unsigned short)27356;
unsigned int var_15 = 641153929U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 6326462940345320623ULL;
long long int var_18 = -646802506492443739LL;
int var_19 = 820908006;
_Bool var_20 = (_Bool)0;
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
