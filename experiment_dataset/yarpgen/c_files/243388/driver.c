#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25401;
signed char var_3 = (signed char)-30;
_Bool var_4 = (_Bool)1;
int var_9 = -681542452;
signed char var_10 = (signed char)-29;
signed char var_11 = (signed char)-10;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)52070;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3632931147U;
unsigned short var_20 = (unsigned short)25047;
unsigned char var_21 = (unsigned char)39;
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
