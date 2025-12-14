#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9852321345835289366ULL;
short var_1 = (short)-6277;
long long int var_5 = -4941629852068795584LL;
unsigned short var_6 = (unsigned short)46926;
short var_8 = (short)512;
signed char var_9 = (signed char)-82;
int zero = 0;
unsigned int var_10 = 3845820411U;
unsigned char var_11 = (unsigned char)191;
unsigned int var_12 = 3746504365U;
signed char var_13 = (signed char)-101;
unsigned char var_14 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
