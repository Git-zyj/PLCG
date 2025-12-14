#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -4520878752844557696LL;
short var_6 = (short)21629;
unsigned int var_8 = 2921419015U;
signed char var_10 = (signed char)108;
unsigned long long int var_16 = 8367711047769216399ULL;
int zero = 0;
unsigned long long int var_19 = 15974833558456606548ULL;
signed char var_20 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
