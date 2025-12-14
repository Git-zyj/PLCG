#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)66;
signed char var_5 = (signed char)-54;
signed char var_11 = (signed char)-108;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3957706296U;
long long int var_14 = 6996100451320834038LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
