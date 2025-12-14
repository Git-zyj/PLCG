#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1843646009;
signed char var_3 = (signed char)-102;
unsigned int var_5 = 3024191981U;
unsigned short var_6 = (unsigned short)28397;
signed char var_8 = (signed char)-58;
short var_12 = (short)-1220;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)27388;
unsigned short var_19 = (unsigned short)37475;
unsigned short var_20 = (unsigned short)50594;
long long int var_21 = 5647503814612947812LL;
_Bool var_22 = (_Bool)0;
int var_23 = -146419071;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
