#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)244;
long long int var_6 = 379115176305220413LL;
unsigned long long int var_10 = 5206729292092477816ULL;
long long int var_11 = -5886118859032341937LL;
unsigned int var_13 = 167561608U;
int var_17 = -1087644571;
int zero = 0;
unsigned short var_18 = (unsigned short)37102;
unsigned short var_19 = (unsigned short)57505;
void init() {
}

void checksum() {
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
