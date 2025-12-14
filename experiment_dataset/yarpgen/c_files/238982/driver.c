#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned int var_1 = 4102585897U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)6640;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-106;
int var_7 = -1114140203;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)44268;
unsigned short var_10 = (unsigned short)61792;
int var_11 = 1114590200;
signed char var_12 = (signed char)59;
int var_13 = 2098777897;
unsigned int var_14 = 3329369637U;
int zero = 0;
signed char var_15 = (signed char)8;
signed char var_16 = (signed char)-46;
unsigned short var_17 = (unsigned short)1735;
long long int var_18 = 4328849422749578726LL;
signed char var_19 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
