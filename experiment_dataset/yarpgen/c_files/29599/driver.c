#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13811268751988200889ULL;
short var_4 = (short)-7332;
signed char var_6 = (signed char)-54;
signed char var_7 = (signed char)-34;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 3744200452U;
unsigned long long int var_12 = 17526845885268679089ULL;
short var_13 = (short)31437;
void init() {
}

void checksum() {
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
