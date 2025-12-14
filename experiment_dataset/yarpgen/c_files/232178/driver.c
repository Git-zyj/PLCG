#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned short var_1 = (unsigned short)44152;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_7 = -530392725;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)37;
signed char var_11 = (signed char)89;
unsigned short var_12 = (unsigned short)506;
unsigned short var_13 = (unsigned short)28820;
long long int var_14 = 6864279000843079134LL;
unsigned char var_16 = (unsigned char)230;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5957072842306041706LL;
unsigned char var_19 = (unsigned char)252;
void init() {
}

void checksum() {
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
