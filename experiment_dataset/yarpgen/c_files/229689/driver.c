#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5020879474285004549ULL;
unsigned char var_1 = (unsigned char)18;
unsigned long long int var_2 = 2549432771585857952ULL;
short var_3 = (short)-4243;
long long int var_5 = 6945024230224304357LL;
unsigned long long int var_6 = 607632833268054794ULL;
unsigned int var_8 = 3281712753U;
int var_9 = 2004965612;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-68;
signed char var_12 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
