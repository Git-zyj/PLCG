#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)181;
long long int var_6 = -100030777420504034LL;
short var_7 = (short)-29505;
signed char var_9 = (signed char)-123;
unsigned short var_10 = (unsigned short)14602;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-3711;
unsigned char var_13 = (unsigned char)245;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)44267;
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
