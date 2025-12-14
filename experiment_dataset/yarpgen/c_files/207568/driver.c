#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
short var_1 = (short)9862;
unsigned short var_2 = (unsigned short)16657;
signed char var_3 = (signed char)106;
_Bool var_7 = (_Bool)1;
int var_8 = -735875788;
long long int var_11 = -4686351503726916056LL;
int var_12 = 1442796349;
int zero = 0;
signed char var_15 = (signed char)-70;
unsigned long long int var_16 = 5527433715579235914ULL;
unsigned char var_17 = (unsigned char)32;
void init() {
}

void checksum() {
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
