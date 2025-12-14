#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -639343864161863790LL;
signed char var_3 = (signed char)-63;
signed char var_5 = (signed char)-109;
_Bool var_7 = (_Bool)0;
long long int var_10 = -1505273903119657757LL;
int zero = 0;
long long int var_11 = 9033521440303055269LL;
signed char var_12 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
