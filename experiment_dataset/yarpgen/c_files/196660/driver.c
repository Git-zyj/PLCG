#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18112;
unsigned int var_4 = 3974477876U;
unsigned short var_5 = (unsigned short)42597;
unsigned long long int var_6 = 18169933460419933130ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)6020;
signed char var_9 = (signed char)109;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)127;
int zero = 0;
long long int var_14 = 7398810282654079776LL;
short var_15 = (short)-15371;
unsigned short var_16 = (unsigned short)27737;
int var_17 = 1106323961;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
