#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18501;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 13908577128344523801ULL;
unsigned long long int var_7 = 5304064696652717351ULL;
long long int var_10 = 8574865377551176776LL;
unsigned short var_11 = (unsigned short)3766;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
