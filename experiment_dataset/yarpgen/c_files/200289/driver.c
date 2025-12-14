#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3818892418955938577LL;
long long int var_1 = -801364722994713203LL;
signed char var_3 = (signed char)76;
signed char var_6 = (signed char)-63;
unsigned long long int var_7 = 1932476926224667169ULL;
unsigned long long int var_8 = 12837590759189382389ULL;
short var_9 = (short)-16781;
unsigned short var_10 = (unsigned short)19200;
int var_11 = 59187844;
signed char var_14 = (signed char)85;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 970684335763612730LL;
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
