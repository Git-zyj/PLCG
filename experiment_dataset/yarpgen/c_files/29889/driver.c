#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1667518295;
unsigned char var_2 = (unsigned char)255;
unsigned short var_5 = (unsigned short)53126;
unsigned short var_6 = (unsigned short)3822;
unsigned int var_7 = 640406856U;
signed char var_8 = (signed char)-82;
long long int var_9 = 1521590617794237538LL;
long long int var_10 = -4977667481271711438LL;
int zero = 0;
int var_12 = -2109171652;
unsigned short var_13 = (unsigned short)17308;
int var_14 = 874349372;
unsigned char var_15 = (unsigned char)88;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
