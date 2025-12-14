#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned long long int var_5 = 17368928477227800979ULL;
unsigned long long int var_7 = 7079570649383930290ULL;
unsigned char var_8 = (unsigned char)18;
unsigned long long int var_10 = 14963849056535140331ULL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-80;
unsigned long long int var_15 = 10592512589629230916ULL;
int var_16 = -1205665265;
unsigned int var_17 = 1637524857U;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4595533484128206621LL;
unsigned int var_21 = 529604224U;
long long int var_22 = 4352249373647173055LL;
_Bool var_23 = (_Bool)0;
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
