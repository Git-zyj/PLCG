#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60048;
short var_3 = (short)-2900;
_Bool var_5 = (_Bool)1;
int var_6 = -1352352201;
short var_7 = (short)18090;
unsigned short var_8 = (unsigned short)32530;
unsigned short var_9 = (unsigned short)55621;
int zero = 0;
int var_10 = 1703576750;
unsigned short var_11 = (unsigned short)31250;
int var_12 = 891461007;
int var_13 = 622059402;
short var_14 = (short)-11322;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
