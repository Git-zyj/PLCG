#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
unsigned int var_3 = 370313472U;
signed char var_4 = (signed char)46;
unsigned int var_5 = 3393422264U;
signed char var_7 = (signed char)-115;
unsigned int var_8 = 3094293897U;
unsigned long long int var_11 = 7513762271406712424ULL;
unsigned int var_13 = 1490175073U;
signed char var_14 = (signed char)94;
unsigned int var_15 = 1193033004U;
int var_17 = 1599738386;
unsigned char var_18 = (unsigned char)67;
int zero = 0;
unsigned short var_19 = (unsigned short)55387;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)38576;
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
