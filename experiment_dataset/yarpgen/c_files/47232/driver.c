#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
short var_2 = (short)5677;
unsigned char var_3 = (unsigned char)202;
int var_4 = -896924435;
long long int var_5 = 843240691303747546LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)60;
unsigned char var_8 = (unsigned char)80;
short var_9 = (short)27541;
_Bool var_10 = (_Bool)0;
short var_11 = (short)4257;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 365390815U;
signed char var_15 = (signed char)-12;
signed char var_16 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
