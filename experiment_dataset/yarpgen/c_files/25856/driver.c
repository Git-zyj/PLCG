#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-113;
unsigned long long int var_5 = 4505644508727929790ULL;
unsigned char var_11 = (unsigned char)198;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = -3429230597815521097LL;
unsigned int var_16 = 4053233610U;
int var_17 = -1971646163;
int var_18 = -1202298680;
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
