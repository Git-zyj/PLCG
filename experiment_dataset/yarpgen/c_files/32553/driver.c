#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2705034472U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 812987516U;
unsigned long long int var_7 = 12726204971607870106ULL;
signed char var_8 = (signed char)116;
long long int var_10 = -3241416071978669613LL;
unsigned short var_11 = (unsigned short)60659;
unsigned int var_15 = 659403578U;
int zero = 0;
short var_17 = (short)-7696;
signed char var_18 = (signed char)-41;
short var_19 = (short)-8757;
int var_20 = 179905333;
unsigned int var_21 = 2221677597U;
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
