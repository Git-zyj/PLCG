#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13008992391667437408ULL;
unsigned short var_1 = (unsigned short)16807;
long long int var_2 = -6249348711943091137LL;
unsigned char var_3 = (unsigned char)117;
unsigned short var_4 = (unsigned short)64441;
unsigned int var_6 = 3737279872U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-11;
unsigned char var_11 = (unsigned char)146;
signed char var_12 = (signed char)36;
unsigned short var_14 = (unsigned short)41083;
int zero = 0;
int var_15 = 2017539454;
short var_16 = (short)19473;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
