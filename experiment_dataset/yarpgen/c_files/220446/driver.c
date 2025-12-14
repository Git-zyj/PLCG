#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7103844263204503870LL;
_Bool var_2 = (_Bool)1;
unsigned int var_11 = 130075348U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 635580197U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1741224394U;
short var_20 = (short)26706;
int var_21 = -399076129;
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
