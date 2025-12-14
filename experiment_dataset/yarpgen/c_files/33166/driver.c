#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
signed char var_2 = (signed char)-109;
unsigned int var_3 = 124180177U;
unsigned short var_5 = (unsigned short)58943;
signed char var_6 = (signed char)101;
long long int var_7 = 6841295784606376966LL;
signed char var_8 = (signed char)56;
long long int var_9 = 2232962616166571292LL;
long long int var_12 = -2368188646612821964LL;
int zero = 0;
unsigned short var_13 = (unsigned short)19023;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1119212583U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
