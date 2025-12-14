#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
signed char var_7 = (signed char)55;
unsigned char var_8 = (unsigned char)102;
int var_9 = 1548130632;
signed char var_12 = (signed char)6;
long long int var_13 = 618727297262401449LL;
unsigned char var_14 = (unsigned char)162;
unsigned long long int var_15 = 15163473525154838300ULL;
int zero = 0;
unsigned int var_18 = 2465131051U;
unsigned short var_19 = (unsigned short)53828;
unsigned int var_20 = 3543495027U;
signed char var_21 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
