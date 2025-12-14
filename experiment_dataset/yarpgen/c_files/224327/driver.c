#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)37005;
unsigned long long int var_8 = 9006480607458496531ULL;
int var_14 = -728471541;
long long int var_18 = -3767138046000623380LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)79;
unsigned short var_21 = (unsigned short)29121;
void init() {
}

void checksum() {
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
