#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7223711636976875532ULL;
signed char var_2 = (signed char)-86;
short var_3 = (short)-8431;
unsigned short var_6 = (unsigned short)64578;
signed char var_9 = (signed char)107;
unsigned int var_11 = 4046393364U;
unsigned char var_12 = (unsigned char)27;
unsigned int var_13 = 3172874657U;
int var_14 = 1210072752;
unsigned short var_16 = (unsigned short)54795;
int zero = 0;
int var_17 = -1519872748;
signed char var_18 = (signed char)105;
unsigned char var_19 = (unsigned char)201;
short var_20 = (short)-12916;
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
