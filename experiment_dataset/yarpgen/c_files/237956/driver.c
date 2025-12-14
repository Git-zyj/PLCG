#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1064712844396616593LL;
unsigned short var_3 = (unsigned short)52262;
unsigned char var_5 = (unsigned char)49;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-11702;
unsigned short var_9 = (unsigned short)10209;
short var_10 = (short)8423;
unsigned int var_12 = 4225575406U;
long long int var_13 = 5046109215717017641LL;
int zero = 0;
int var_15 = -1084639713;
unsigned int var_16 = 3957456258U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
