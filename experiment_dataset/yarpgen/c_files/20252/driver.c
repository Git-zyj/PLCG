#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 600687771U;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)27379;
_Bool var_7 = (_Bool)0;
long long int var_8 = 5074354051016065694LL;
unsigned char var_10 = (unsigned char)164;
unsigned int var_11 = 4187891216U;
signed char var_12 = (signed char)-63;
int zero = 0;
long long int var_15 = -7228428323400025610LL;
unsigned char var_16 = (unsigned char)33;
long long int var_17 = -3398610838259568422LL;
int var_18 = -1948164434;
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
