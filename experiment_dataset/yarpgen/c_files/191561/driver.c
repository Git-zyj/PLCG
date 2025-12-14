#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9594;
unsigned short var_1 = (unsigned short)64279;
_Bool var_2 = (_Bool)0;
long long int var_3 = 8045501093500659289LL;
unsigned int var_6 = 2167414009U;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)-108;
short var_13 = (short)-4600;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)46;
unsigned int var_16 = 3512650050U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
