#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18456;
long long int var_2 = -1593877837386648244LL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)16723;
signed char var_8 = (signed char)93;
int var_13 = -601166139;
long long int var_16 = -2062125928203545047LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)201;
signed char var_20 = (signed char)71;
signed char var_21 = (signed char)78;
unsigned int var_22 = 1539319714U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
