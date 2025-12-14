#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)251;
signed char var_2 = (signed char)-120;
long long int var_3 = -823525147531893545LL;
long long int var_4 = -8430956168002059086LL;
short var_5 = (short)29192;
unsigned short var_9 = (unsigned short)62235;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 4314442773332155335LL;
signed char var_14 = (signed char)91;
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
