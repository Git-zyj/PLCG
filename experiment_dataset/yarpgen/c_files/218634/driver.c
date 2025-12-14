#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 13126383954777444123ULL;
short var_3 = (short)-11309;
unsigned int var_11 = 2700385126U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1048843309870654620ULL;
short var_14 = (short)2357;
short var_15 = (short)-17719;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
