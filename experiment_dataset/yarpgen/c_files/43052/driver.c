#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
short var_2 = (short)-29983;
unsigned short var_4 = (unsigned short)58452;
_Bool var_5 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)2510;
short var_17 = (short)-27193;
int zero = 0;
unsigned short var_18 = (unsigned short)61133;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-28922;
unsigned char var_21 = (unsigned char)245;
unsigned int var_22 = 676159998U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
