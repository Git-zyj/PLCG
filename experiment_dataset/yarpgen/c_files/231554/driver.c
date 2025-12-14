#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1503735517;
int var_1 = 52336225;
unsigned int var_2 = 3210513459U;
unsigned short var_3 = (unsigned short)9675;
unsigned char var_6 = (unsigned char)157;
short var_8 = (short)23146;
unsigned int var_11 = 891997069U;
int zero = 0;
unsigned int var_17 = 3678532429U;
long long int var_18 = 1871242899964047143LL;
unsigned short var_19 = (unsigned short)32729;
unsigned short var_20 = (unsigned short)10963;
unsigned short var_21 = (unsigned short)38016;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
