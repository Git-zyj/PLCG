#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-103;
_Bool var_3 = (_Bool)1;
long long int var_5 = 3599664856703109837LL;
short var_6 = (short)-15585;
int var_14 = 1750725374;
unsigned char var_15 = (unsigned char)93;
int zero = 0;
short var_17 = (short)-28348;
unsigned int var_18 = 1170734326U;
unsigned short var_19 = (unsigned short)39511;
unsigned short var_20 = (unsigned short)33616;
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
