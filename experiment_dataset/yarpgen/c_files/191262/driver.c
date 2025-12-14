#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40540;
int var_3 = -1760697014;
int var_4 = -939079238;
signed char var_6 = (signed char)-34;
unsigned int var_8 = 2865580421U;
unsigned int var_9 = 1929136834U;
long long int var_10 = 1718710195062583683LL;
int zero = 0;
unsigned short var_11 = (unsigned short)22649;
_Bool var_12 = (_Bool)1;
int var_13 = 881250004;
unsigned short var_14 = (unsigned short)35175;
void init() {
}

void checksum() {
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
