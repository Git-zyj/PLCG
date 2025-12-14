#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3253462572U;
unsigned short var_2 = (unsigned short)51441;
signed char var_3 = (signed char)108;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)28;
int var_10 = -426900486;
unsigned char var_11 = (unsigned char)172;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)22;
unsigned long long int var_17 = 6458955571128231564ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)57;
long long int var_20 = 6913416656178735644LL;
unsigned short var_21 = (unsigned short)28265;
void init() {
}

void checksum() {
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
