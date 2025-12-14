#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-40;
unsigned char var_6 = (unsigned char)255;
int var_9 = -962998675;
short var_12 = (short)11013;
int var_13 = -369430089;
signed char var_14 = (signed char)-20;
unsigned long long int var_15 = 10238903304113457728ULL;
int zero = 0;
unsigned long long int var_17 = 13001283902948992357ULL;
_Bool var_18 = (_Bool)1;
int var_19 = -1678827706;
int var_20 = 406675663;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
