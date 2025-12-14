#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20535;
short var_1 = (short)12085;
long long int var_2 = -3896043612300394164LL;
unsigned long long int var_4 = 15599471345083041899ULL;
unsigned short var_5 = (unsigned short)10677;
unsigned short var_8 = (unsigned short)63264;
unsigned long long int var_9 = 11606192007837780929ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 655951779U;
int zero = 0;
unsigned long long int var_13 = 17756650963709032841ULL;
unsigned int var_14 = 2249352066U;
unsigned char var_15 = (unsigned char)132;
unsigned short var_16 = (unsigned short)55656;
short var_17 = (short)29868;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
