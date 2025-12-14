#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)61;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)26707;
long long int var_5 = -4762146481817667109LL;
unsigned long long int var_8 = 14783491786555523812ULL;
unsigned int var_9 = 2354415161U;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-13009;
long long int var_13 = -2979860228312633035LL;
short var_14 = (short)-23516;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
