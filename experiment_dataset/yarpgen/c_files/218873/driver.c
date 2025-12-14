#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
int var_6 = -1524854006;
unsigned char var_8 = (unsigned char)39;
int var_9 = -243397231;
unsigned int var_11 = 3099898973U;
long long int var_12 = 3548929875493640182LL;
unsigned int var_13 = 4128861074U;
int zero = 0;
signed char var_15 = (signed char)22;
long long int var_16 = 7979544563521812554LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 2516296153913754093LL;
unsigned long long int var_19 = 9402201717023433943ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
