#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3448432103719289471LL;
unsigned long long int var_1 = 11518471554040956783ULL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-2404;
short var_9 = (short)13064;
unsigned long long int var_11 = 14821170715788143485ULL;
int zero = 0;
unsigned long long int var_16 = 14116367981386526711ULL;
int var_17 = -811953763;
int var_18 = 1438822525;
signed char var_19 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
