#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)100;
signed char var_4 = (signed char)116;
unsigned short var_7 = (unsigned short)18393;
unsigned short var_8 = (unsigned short)11630;
int var_10 = 321296126;
int var_11 = -829158406;
signed char var_12 = (signed char)-120;
signed char var_13 = (signed char)-126;
unsigned short var_14 = (unsigned short)50880;
long long int var_15 = 5577407165970792062LL;
unsigned long long int var_16 = 7409366848536776230ULL;
signed char var_17 = (signed char)-109;
int zero = 0;
unsigned int var_18 = 3908225226U;
long long int var_19 = 6256141482320730709LL;
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
