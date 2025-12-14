#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61299;
_Bool var_2 = (_Bool)0;
long long int var_4 = -8260771838980416819LL;
unsigned int var_5 = 419975733U;
unsigned char var_7 = (unsigned char)66;
unsigned short var_8 = (unsigned short)1922;
unsigned int var_9 = 4144579831U;
unsigned short var_10 = (unsigned short)31116;
int zero = 0;
unsigned short var_12 = (unsigned short)57595;
signed char var_13 = (signed char)-89;
unsigned short var_14 = (unsigned short)33660;
unsigned char var_15 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
