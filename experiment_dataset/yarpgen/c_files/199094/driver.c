#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3411;
unsigned char var_1 = (unsigned char)102;
unsigned long long int var_7 = 8605081785386462604ULL;
_Bool var_9 = (_Bool)0;
long long int var_11 = 6091783627178786895LL;
long long int var_13 = -2503838979160841919LL;
unsigned short var_15 = (unsigned short)52681;
short var_16 = (short)17810;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)41254;
int var_19 = -515700061;
long long int var_20 = -2816837948483894510LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
