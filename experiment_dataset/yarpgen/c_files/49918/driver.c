#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 338112649U;
signed char var_1 = (signed char)-98;
int var_2 = 2086436970;
unsigned short var_6 = (unsigned short)11130;
unsigned char var_7 = (unsigned char)163;
unsigned short var_8 = (unsigned short)11754;
long long int var_10 = 7563294171129364906LL;
short var_14 = (short)9588;
int zero = 0;
long long int var_15 = -3913524747613551310LL;
short var_16 = (short)4324;
unsigned short var_17 = (unsigned short)62040;
int var_18 = 723217105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
