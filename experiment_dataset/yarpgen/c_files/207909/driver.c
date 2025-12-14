#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5779181504000611453ULL;
long long int var_2 = 4020799672054809344LL;
unsigned short var_3 = (unsigned short)65037;
signed char var_4 = (signed char)4;
short var_5 = (short)15556;
unsigned long long int var_6 = 4465174010858973021ULL;
signed char var_7 = (signed char)96;
unsigned short var_9 = (unsigned short)62420;
long long int var_11 = -4017000090843109992LL;
int zero = 0;
int var_12 = -1621616185;
unsigned int var_13 = 501812731U;
unsigned int var_14 = 1626917198U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
