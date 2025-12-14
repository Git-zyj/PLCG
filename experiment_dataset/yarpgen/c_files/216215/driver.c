#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -243479309;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-29;
signed char var_6 = (signed char)32;
unsigned char var_9 = (unsigned char)28;
int var_13 = 1313108769;
unsigned char var_15 = (unsigned char)215;
int zero = 0;
unsigned long long int var_16 = 7662884567814491573ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3502945293U;
long long int var_19 = -1372843576842895524LL;
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
