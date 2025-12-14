#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)27968;
short var_6 = (short)-8776;
unsigned int var_7 = 3980745332U;
short var_9 = (short)-3815;
int var_10 = -1071740383;
int zero = 0;
unsigned short var_11 = (unsigned short)54149;
long long int var_12 = 859170464702713316LL;
unsigned long long int var_13 = 3003009848081188953ULL;
_Bool var_14 = (_Bool)0;
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
