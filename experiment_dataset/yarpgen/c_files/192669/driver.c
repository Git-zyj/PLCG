#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3414511683U;
int var_2 = -1982420075;
long long int var_3 = 4743095354150956133LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4731690441680036446ULL;
unsigned char var_10 = (unsigned char)104;
unsigned int var_11 = 963231883U;
_Bool var_13 = (_Bool)1;
int var_14 = 734634718;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)59;
signed char var_19 = (signed char)94;
unsigned int var_20 = 245977108U;
long long int var_21 = -5467535527266475436LL;
unsigned long long int var_22 = 5802338320119853794ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
