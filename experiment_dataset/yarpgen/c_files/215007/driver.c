#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6122640868878874904LL;
long long int var_1 = -1118126804680484371LL;
int var_4 = -699688429;
unsigned long long int var_5 = 14924945708098781801ULL;
long long int var_6 = 7218815050409030799LL;
short var_7 = (short)-27536;
unsigned long long int var_9 = 7627958703025131279ULL;
unsigned long long int var_10 = 12371044928741427375ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)33941;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15723693161382020168ULL;
signed char var_14 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
