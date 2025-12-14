#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52599;
short var_2 = (short)-4613;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 1380284549641810893ULL;
signed char var_7 = (signed char)114;
unsigned char var_8 = (unsigned char)123;
unsigned long long int var_9 = 5883454277934501210ULL;
unsigned long long int var_10 = 15003772392252112424ULL;
long long int var_11 = -447637651252613521LL;
int zero = 0;
int var_12 = -1247732110;
unsigned long long int var_13 = 17877737307277621097ULL;
unsigned long long int var_14 = 9706725992897007599ULL;
unsigned int var_15 = 4191895368U;
_Bool var_16 = (_Bool)1;
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
