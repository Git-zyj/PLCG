#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
_Bool var_3 = (_Bool)0;
int var_5 = -647517551;
int var_6 = -494325946;
short var_8 = (short)-4244;
int var_9 = -422989858;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)9038;
int zero = 0;
int var_18 = 2081952743;
unsigned int var_19 = 3970468893U;
signed char var_20 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
