#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -93864952932567048LL;
unsigned long long int var_1 = 13390881036239237409ULL;
unsigned int var_2 = 1845449658U;
unsigned int var_3 = 2908910895U;
long long int var_6 = 2185746258438633298LL;
unsigned long long int var_8 = 10430517150041950489ULL;
int var_9 = 1431306185;
unsigned long long int var_11 = 8707258511871155061ULL;
unsigned short var_12 = (unsigned short)47066;
unsigned long long int var_14 = 3157502818950285673ULL;
long long int var_15 = 7402392406871670539LL;
signed char var_16 = (signed char)55;
unsigned short var_17 = (unsigned short)45388;
unsigned short var_19 = (unsigned short)54023;
int zero = 0;
unsigned int var_20 = 4003352954U;
unsigned int var_21 = 4026134598U;
int var_22 = 720681877;
unsigned short var_23 = (unsigned short)58750;
long long int var_24 = -7428863474152822099LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
