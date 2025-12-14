#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64728;
long long int var_4 = -6619503962007323631LL;
unsigned long long int var_5 = 7870266059262088609ULL;
unsigned short var_7 = (unsigned short)48287;
unsigned long long int var_12 = 9861034518546383712ULL;
unsigned long long int var_17 = 3009444536760584351ULL;
int var_18 = 286311188;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)55;
short var_22 = (short)-20317;
void init() {
}

void checksum() {
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
