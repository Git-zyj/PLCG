#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16413171618083869056ULL;
unsigned short var_1 = (unsigned short)10567;
unsigned long long int var_2 = 4836067004684234494ULL;
unsigned long long int var_3 = 10768065075856494631ULL;
unsigned long long int var_5 = 8412695294122352937ULL;
unsigned short var_6 = (unsigned short)48827;
unsigned short var_7 = (unsigned short)36422;
signed char var_9 = (signed char)-6;
unsigned long long int var_10 = 2266142230328633035ULL;
int zero = 0;
unsigned long long int var_11 = 13062823986900525619ULL;
unsigned long long int var_12 = 14263879360397683893ULL;
unsigned short var_13 = (unsigned short)9940;
unsigned short var_14 = (unsigned short)38811;
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
