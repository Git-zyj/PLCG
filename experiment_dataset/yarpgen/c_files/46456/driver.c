#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32078;
unsigned char var_3 = (unsigned char)47;
int var_4 = -1802278081;
signed char var_5 = (signed char)-2;
long long int var_6 = 4286803891856245068LL;
unsigned int var_7 = 2868002178U;
signed char var_8 = (signed char)68;
short var_9 = (short)19963;
short var_10 = (short)-13111;
signed char var_12 = (signed char)24;
int zero = 0;
long long int var_13 = 5915949673586626584LL;
short var_14 = (short)-3338;
unsigned long long int var_15 = 8117192603877126182ULL;
signed char var_16 = (signed char)(-127 - 1);
unsigned int var_17 = 2232899104U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
