#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -653401846870164568LL;
unsigned short var_2 = (unsigned short)49011;
unsigned long long int var_4 = 13591410277176156725ULL;
short var_5 = (short)29421;
short var_6 = (short)-34;
short var_8 = (short)-7317;
long long int var_10 = 6679876047436572810LL;
unsigned char var_11 = (unsigned char)86;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-28646;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)110;
signed char var_19 = (signed char)98;
long long int var_20 = -4073241263316141515LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
