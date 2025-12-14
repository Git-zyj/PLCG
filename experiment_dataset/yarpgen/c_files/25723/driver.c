#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 426916749U;
unsigned long long int var_2 = 3756019561288773049ULL;
short var_4 = (short)5156;
short var_6 = (short)776;
unsigned char var_9 = (unsigned char)40;
signed char var_10 = (signed char)126;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)63;
short var_15 = (short)-4944;
unsigned char var_16 = (unsigned char)101;
int zero = 0;
unsigned long long int var_19 = 14089431205850708733ULL;
signed char var_20 = (signed char)-113;
unsigned long long int var_21 = 7358210483013014635ULL;
short var_22 = (short)-5130;
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
