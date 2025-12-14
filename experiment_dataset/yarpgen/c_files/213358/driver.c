#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13286998815433178181ULL;
int var_5 = -1560494751;
unsigned long long int var_6 = 17875826299377978113ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4854964569806026028ULL;
unsigned char var_9 = (unsigned char)202;
short var_12 = (short)-20091;
unsigned long long int var_13 = 3513050463433942566ULL;
unsigned char var_15 = (unsigned char)50;
unsigned long long int var_18 = 6346317620149699943ULL;
int zero = 0;
unsigned long long int var_19 = 5735338846238306663ULL;
unsigned char var_20 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
