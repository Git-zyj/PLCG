#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)180;
unsigned long long int var_2 = 11409335608799236857ULL;
unsigned long long int var_3 = 3137619643611294038ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_7 = -19274106;
unsigned long long int var_8 = 11923266076496309679ULL;
_Bool var_9 = (_Bool)0;
int var_11 = 443770159;
unsigned long long int var_13 = 15356289429566640651ULL;
long long int var_15 = 8625442487594495793LL;
unsigned char var_16 = (unsigned char)65;
int zero = 0;
unsigned char var_18 = (unsigned char)56;
unsigned char var_19 = (unsigned char)255;
long long int var_20 = -1349813586801399326LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 7698819392620594252LL;
unsigned char var_23 = (unsigned char)158;
unsigned short var_24 = (unsigned short)25295;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
