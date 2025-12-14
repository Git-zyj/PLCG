#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)150;
short var_13 = (short)-1269;
unsigned int var_15 = 2886175340U;
unsigned long long int var_17 = 7816866017043210745ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)17843;
unsigned short var_20 = (unsigned short)13180;
signed char var_21 = (signed char)-32;
unsigned short var_22 = (unsigned short)16000;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
