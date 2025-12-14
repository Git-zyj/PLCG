#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1470794734;
unsigned char var_8 = (unsigned char)18;
_Bool var_12 = (_Bool)1;
short var_14 = (short)30939;
unsigned long long int var_16 = 9953835393683675198ULL;
unsigned int var_17 = 1456526037U;
int zero = 0;
unsigned int var_18 = 3714689950U;
signed char var_19 = (signed char)2;
long long int var_20 = -2054109114666652215LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
