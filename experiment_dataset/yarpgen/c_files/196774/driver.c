#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4556166033215071707LL;
unsigned long long int var_2 = 8325948682017196707ULL;
signed char var_4 = (signed char)88;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 18277647809277789324ULL;
unsigned long long int var_13 = 2100434001013457696ULL;
int zero = 0;
unsigned long long int var_16 = 7590401517190878122ULL;
short var_17 = (short)29860;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
