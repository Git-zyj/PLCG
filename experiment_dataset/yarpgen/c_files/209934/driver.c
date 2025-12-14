#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44426;
unsigned int var_1 = 577694322U;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)27;
int var_8 = 564197993;
short var_9 = (short)-2785;
unsigned short var_10 = (unsigned short)12406;
int zero = 0;
signed char var_11 = (signed char)95;
unsigned int var_12 = 1148175399U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
