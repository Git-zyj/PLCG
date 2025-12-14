#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
long long int var_3 = -5774771635824612988LL;
unsigned char var_7 = (unsigned char)254;
unsigned short var_9 = (unsigned short)63492;
int zero = 0;
signed char var_18 = (signed char)-23;
signed char var_19 = (signed char)-31;
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
