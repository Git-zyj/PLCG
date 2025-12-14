#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 139769815521749263LL;
unsigned long long int var_1 = 16594017125698741608ULL;
int var_2 = 1429300244;
long long int var_3 = 5329537011801880947LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 77164506132730637LL;
unsigned char var_6 = (unsigned char)151;
long long int var_7 = -1912943288112778620LL;
unsigned int var_8 = 3079153255U;
long long int var_9 = 6699503361252220132LL;
signed char var_10 = (signed char)-13;
unsigned long long int var_11 = 17459162786054957208ULL;
int var_12 = -513617823;
long long int var_13 = -5668329832879923514LL;
signed char var_15 = (signed char)18;
unsigned char var_17 = (unsigned char)49;
int zero = 0;
unsigned long long int var_18 = 4785062510688492413ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5627306207198603422ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
