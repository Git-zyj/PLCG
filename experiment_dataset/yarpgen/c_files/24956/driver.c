#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8796060340798551622ULL;
unsigned short var_5 = (unsigned short)40688;
short var_7 = (short)26549;
signed char var_9 = (signed char)102;
unsigned int var_10 = 811301240U;
unsigned long long int var_13 = 1633818135343317155ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_16 = (short)1550;
int var_17 = -169178325;
unsigned int var_18 = 4168672325U;
unsigned int var_19 = 3350875927U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
