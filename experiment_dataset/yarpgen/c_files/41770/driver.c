#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7812500851393755429LL;
unsigned int var_2 = 1671456601U;
int var_4 = 1027516317;
signed char var_6 = (signed char)90;
unsigned int var_7 = 425918424U;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8744762384289559229LL;
signed char var_10 = (signed char)0;
signed char var_11 = (signed char)119;
signed char var_12 = (signed char)-31;
int zero = 0;
unsigned short var_14 = (unsigned short)38691;
unsigned int var_15 = 199595795U;
unsigned short var_16 = (unsigned short)23423;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
