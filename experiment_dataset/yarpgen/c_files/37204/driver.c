#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11601108313658756486ULL;
unsigned short var_2 = (unsigned short)60466;
unsigned int var_3 = 2218548160U;
signed char var_4 = (signed char)95;
unsigned long long int var_6 = 5905579340643137532ULL;
signed char var_11 = (signed char)-100;
unsigned int var_12 = 1040929359U;
short var_13 = (short)20572;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-21932;
unsigned char var_18 = (unsigned char)117;
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
