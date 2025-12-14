#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -191542844;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)49455;
short var_3 = (short)-13712;
unsigned int var_4 = 2988853103U;
unsigned int var_5 = 3188774344U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)109;
unsigned long long int var_9 = 1138030560709635155ULL;
short var_10 = (short)-596;
_Bool var_11 = (_Bool)0;
short var_12 = (short)25253;
int zero = 0;
unsigned short var_14 = (unsigned short)33019;
unsigned short var_15 = (unsigned short)40114;
short var_16 = (short)-2292;
unsigned long long int var_17 = 17850717361041354859ULL;
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
