#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13691873232528685133ULL;
unsigned int var_2 = 2305597890U;
long long int var_3 = -4745642626288367174LL;
short var_4 = (short)2798;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_16 = (short)-27083;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3501739241536563319LL;
signed char var_19 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
