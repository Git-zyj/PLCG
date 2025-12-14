#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2495124684U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3737613884U;
long long int var_6 = -2120093306942653148LL;
signed char var_7 = (signed char)15;
unsigned int var_8 = 1226097374U;
short var_9 = (short)-16436;
int zero = 0;
long long int var_10 = 5316546829670288104LL;
unsigned int var_11 = 2418000314U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
