#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35732;
signed char var_1 = (signed char)-23;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)40644;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_13 = 5313652501251932356LL;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)62920;
short var_19 = (short)20107;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-25078;
void init() {
}

void checksum() {
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
