#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-41;
int var_3 = 1186799181;
signed char var_5 = (signed char)-8;
unsigned char var_6 = (unsigned char)208;
unsigned int var_7 = 1655337160U;
unsigned int var_9 = 3213541340U;
short var_11 = (short)8209;
long long int var_13 = -7207769198149835785LL;
int zero = 0;
unsigned char var_16 = (unsigned char)183;
short var_17 = (short)32448;
unsigned char var_18 = (unsigned char)237;
long long int var_19 = -4077733376271813070LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
