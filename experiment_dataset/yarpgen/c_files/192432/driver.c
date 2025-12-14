#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8330214784719169029LL;
int var_1 = 2113566173;
signed char var_2 = (signed char)-9;
signed char var_5 = (signed char)100;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)21280;
unsigned long long int var_9 = 17358269873714289597ULL;
unsigned char var_10 = (unsigned char)149;
unsigned char var_11 = (unsigned char)58;
int var_12 = 107826581;
int zero = 0;
unsigned long long int var_14 = 635696680403535829ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
