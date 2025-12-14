#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned char var_1 = (unsigned char)134;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)45526;
unsigned int var_8 = 3252723927U;
long long int var_12 = -8257327405824042570LL;
unsigned int var_14 = 3268453457U;
int zero = 0;
unsigned int var_15 = 993357507U;
long long int var_16 = -9117762906443551094LL;
int var_17 = 1095670035;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
