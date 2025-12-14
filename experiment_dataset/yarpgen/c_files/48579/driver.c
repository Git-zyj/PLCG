#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2301331143528948732LL;
unsigned long long int var_4 = 3524140066657083087ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)198;
unsigned char var_7 = (unsigned char)157;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)32276;
unsigned long long int var_12 = 17603773592321404762ULL;
int zero = 0;
unsigned long long int var_13 = 11894879833815578953ULL;
unsigned char var_14 = (unsigned char)107;
unsigned short var_15 = (unsigned short)22005;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
