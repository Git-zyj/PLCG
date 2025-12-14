#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18171598450754138713ULL;
unsigned long long int var_5 = 3917827218582523494ULL;
unsigned short var_6 = (unsigned short)41372;
long long int var_7 = -5861126469296208676LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)18398;
unsigned int var_10 = 3650306717U;
long long int var_12 = 7194074028526872588LL;
short var_14 = (short)-32017;
int zero = 0;
short var_17 = (short)8630;
unsigned short var_18 = (unsigned short)35006;
void init() {
}

void checksum() {
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
