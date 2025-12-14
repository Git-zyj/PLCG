#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2075680213U;
unsigned long long int var_1 = 18391842121454240843ULL;
unsigned short var_3 = (unsigned short)53959;
unsigned short var_4 = (unsigned short)35573;
unsigned short var_5 = (unsigned short)15141;
unsigned short var_7 = (unsigned short)62662;
_Bool var_8 = (_Bool)1;
long long int var_11 = -3028972473394520928LL;
unsigned short var_12 = (unsigned short)33090;
long long int var_16 = -8130158966359668349LL;
int zero = 0;
long long int var_18 = -4093521952858082837LL;
unsigned short var_19 = (unsigned short)38376;
signed char var_20 = (signed char)-92;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
