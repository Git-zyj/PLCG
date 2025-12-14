#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)26123;
unsigned int var_4 = 3983405782U;
unsigned char var_6 = (unsigned char)44;
signed char var_7 = (signed char)-19;
unsigned int var_9 = 775111363U;
long long int var_10 = -6882855491940446538LL;
int var_11 = -47919788;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1958970102;
void init() {
}

void checksum() {
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
