#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3163957777U;
short var_3 = (short)-20630;
unsigned short var_4 = (unsigned short)1667;
long long int var_5 = 2520678956662960290LL;
signed char var_7 = (signed char)-124;
short var_10 = (short)-11955;
long long int var_11 = -5353209917922603330LL;
signed char var_12 = (signed char)-38;
unsigned short var_15 = (unsigned short)14609;
int var_17 = 304024490;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)27;
signed char var_21 = (signed char)3;
unsigned char var_22 = (unsigned char)174;
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
