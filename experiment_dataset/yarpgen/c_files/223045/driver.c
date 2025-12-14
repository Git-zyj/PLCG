#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11649605581790535875ULL;
signed char var_4 = (signed char)-113;
unsigned char var_5 = (unsigned char)134;
long long int var_6 = 953892459661602775LL;
unsigned short var_7 = (unsigned short)912;
int var_8 = 1082390760;
signed char var_9 = (signed char)-23;
long long int var_17 = -6588941905652156177LL;
int zero = 0;
long long int var_20 = -6429655832226791159LL;
int var_21 = 1929404097;
int var_22 = 24001023;
void init() {
}

void checksum() {
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
