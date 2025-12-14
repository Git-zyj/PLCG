#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18391;
short var_2 = (short)27026;
short var_3 = (short)17556;
short var_8 = (short)-8927;
short var_9 = (short)-2103;
short var_12 = (short)-1013;
short var_13 = (short)202;
unsigned short var_14 = (unsigned short)65188;
int zero = 0;
short var_17 = (short)25746;
short var_18 = (short)22819;
short var_19 = (short)4260;
unsigned short var_20 = (unsigned short)28084;
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
