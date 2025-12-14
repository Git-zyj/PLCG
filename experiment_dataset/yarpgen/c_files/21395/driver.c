#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3190715607334454275LL;
int var_1 = -1546466935;
int var_2 = 1297687305;
long long int var_6 = -7942623854018360210LL;
unsigned short var_8 = (unsigned short)53624;
unsigned int var_10 = 3214734087U;
int zero = 0;
long long int var_14 = -3922531991915545132LL;
signed char var_15 = (signed char)-17;
long long int var_16 = -8387830905190889527LL;
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
