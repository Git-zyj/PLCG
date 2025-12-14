#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned int var_2 = 3477877250U;
short var_4 = (short)-30704;
_Bool var_8 = (_Bool)1;
short var_10 = (short)6779;
long long int var_12 = 7870730190347547856LL;
short var_17 = (short)-12141;
int zero = 0;
int var_20 = -1524349503;
unsigned long long int var_21 = 8494702560646360958ULL;
unsigned short var_22 = (unsigned short)22655;
void init() {
}

void checksum() {
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
