#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)126;
unsigned long long int var_4 = 10670997293578134761ULL;
unsigned char var_5 = (unsigned char)89;
long long int var_9 = 8785642742020914364LL;
unsigned char var_10 = (unsigned char)242;
unsigned long long int var_13 = 9023150066478605428ULL;
unsigned int var_15 = 2420824090U;
unsigned char var_16 = (unsigned char)155;
int zero = 0;
unsigned long long int var_17 = 1416213469713880790ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-15048;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 468250277303058324ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
