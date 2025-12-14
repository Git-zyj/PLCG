#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 1804076826;
int var_4 = -2081331004;
short var_5 = (short)27189;
short var_7 = (short)24987;
int var_8 = -1260295288;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)94;
int var_15 = -1141137871;
long long int var_16 = -3812246848264847241LL;
int zero = 0;
int var_17 = -820079008;
int var_18 = -931556077;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)25741;
long long int var_21 = -6699192423901458104LL;
long long int var_22 = -1476334307855064567LL;
long long int var_23 = 6685746059994019712LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
