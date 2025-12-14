#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-6903;
short var_5 = (short)11267;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)37227;
short var_11 = (short)22161;
int zero = 0;
short var_18 = (short)-29971;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-25468;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
