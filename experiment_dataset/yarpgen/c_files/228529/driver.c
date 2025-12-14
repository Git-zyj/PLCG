#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7530979380086878924LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-16;
unsigned char var_3 = (unsigned char)103;
unsigned char var_6 = (unsigned char)248;
signed char var_7 = (signed char)22;
_Bool var_9 = (_Bool)0;
long long int var_11 = -2315813649780463221LL;
unsigned short var_12 = (unsigned short)49841;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)169;
unsigned long long int var_16 = 10866858762692697797ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
