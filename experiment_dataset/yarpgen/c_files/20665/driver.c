#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8620687818894711670ULL;
long long int var_3 = -7138859787740421967LL;
long long int var_4 = 527440228342711096LL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-123;
unsigned char var_18 = (unsigned char)132;
int zero = 0;
int var_19 = -519299947;
unsigned short var_20 = (unsigned short)16768;
unsigned short var_21 = (unsigned short)40885;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
