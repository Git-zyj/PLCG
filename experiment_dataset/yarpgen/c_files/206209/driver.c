#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3742362304U;
signed char var_1 = (signed char)29;
unsigned short var_5 = (unsigned short)46729;
short var_8 = (short)15873;
unsigned char var_9 = (unsigned char)22;
unsigned long long int var_10 = 7901230949170843030ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)60935;
_Bool var_14 = (_Bool)1;
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
