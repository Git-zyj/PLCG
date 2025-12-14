#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
short var_1 = (short)-19680;
unsigned long long int var_3 = 11528320467848097649ULL;
short var_5 = (short)-19201;
unsigned long long int var_6 = 923202295318652189ULL;
short var_7 = (short)3421;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1160305006U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13015948147185645261ULL;
unsigned char var_15 = (unsigned char)117;
unsigned int var_17 = 2566252660U;
signed char var_18 = (signed char)46;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8585850712986738786LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
