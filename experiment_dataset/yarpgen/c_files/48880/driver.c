#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 2971507328331876413ULL;
signed char var_2 = (signed char)109;
_Bool var_3 = (_Bool)1;
long long int var_4 = 7285331822524894772LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3469263065U;
unsigned short var_7 = (unsigned short)57222;
unsigned char var_8 = (unsigned char)15;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-17662;
unsigned short var_12 = (unsigned short)6606;
long long int var_13 = 62917380633330350LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
