#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
unsigned long long int var_1 = 6340178304902579298ULL;
_Bool var_2 = (_Bool)0;
short var_6 = (short)-26045;
short var_7 = (short)31109;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 18045248821377554675ULL;
short var_11 = (short)-21586;
int zero = 0;
unsigned long long int var_12 = 633965773008256944ULL;
unsigned long long int var_13 = 10289891803687666980ULL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-8367;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
