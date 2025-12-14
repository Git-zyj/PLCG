#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)13;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 4561970676242445991ULL;
unsigned long long int var_11 = 13579974902231569498ULL;
unsigned short var_17 = (unsigned short)61908;
int zero = 0;
int var_19 = 1207364636;
signed char var_20 = (signed char)-35;
int var_21 = -630937149;
long long int var_22 = -4428958359575338150LL;
void init() {
}

void checksum() {
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
