#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-48;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)40;
unsigned char var_6 = (unsigned char)123;
unsigned short var_8 = (unsigned short)43946;
unsigned short var_9 = (unsigned short)61578;
long long int var_11 = 733703520223928697LL;
unsigned long long int var_12 = 6735586480325897939ULL;
unsigned char var_14 = (unsigned char)235;
long long int var_17 = -5821525053060227287LL;
int zero = 0;
short var_18 = (short)29736;
unsigned int var_19 = 2768488565U;
void init() {
}

void checksum() {
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
