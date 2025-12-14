#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1152582794;
int var_2 = 1622102022;
signed char var_3 = (signed char)-29;
long long int var_4 = -675331648299618599LL;
int var_7 = 1009616069;
unsigned int var_8 = 3519726556U;
signed char var_11 = (signed char)-37;
_Bool var_13 = (_Bool)0;
long long int var_15 = 8972392403294451764LL;
int zero = 0;
signed char var_16 = (signed char)73;
unsigned int var_17 = 3087765406U;
unsigned long long int var_18 = 10324108993522609411ULL;
short var_19 = (short)-20710;
void init() {
}

void checksum() {
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
