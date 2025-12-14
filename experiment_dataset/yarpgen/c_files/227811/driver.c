#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26807;
short var_1 = (short)-3197;
int var_2 = -1943025388;
unsigned char var_3 = (unsigned char)201;
long long int var_5 = 4879831828303005867LL;
long long int var_6 = -8425456223178587622LL;
signed char var_7 = (signed char)60;
unsigned short var_8 = (unsigned short)36390;
unsigned long long int var_10 = 1831148836298583548ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)5019;
int zero = 0;
long long int var_14 = 4059536599355127595LL;
unsigned short var_15 = (unsigned short)22309;
unsigned char var_16 = (unsigned char)115;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
