#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)44;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned char var_17 = (unsigned char)149;
long long int var_18 = 5502988183566620471LL;
int zero = 0;
short var_19 = (short)30624;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
