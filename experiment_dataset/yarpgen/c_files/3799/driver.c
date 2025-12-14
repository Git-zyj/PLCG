#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18048127486473479410ULL;
signed char var_4 = (signed char)-81;
signed char var_9 = (signed char)64;
unsigned short var_10 = (unsigned short)50391;
unsigned short var_13 = (unsigned short)19943;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -60170285;
int var_19 = 1504829621;
unsigned long long int var_20 = 2794383183189163955ULL;
unsigned int var_21 = 2430530181U;
short var_22 = (short)27250;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
