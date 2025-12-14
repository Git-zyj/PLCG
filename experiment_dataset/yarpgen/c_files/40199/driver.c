#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned char var_2 = (unsigned char)93;
long long int var_3 = 4584718962912664885LL;
long long int var_4 = -1144160876381461552LL;
unsigned int var_5 = 1266149518U;
unsigned char var_7 = (unsigned char)204;
long long int var_8 = 1119866079866883925LL;
unsigned short var_10 = (unsigned short)4490;
long long int var_12 = 2606332989632620408LL;
unsigned char var_13 = (unsigned char)238;
unsigned char var_14 = (unsigned char)123;
unsigned short var_15 = (unsigned short)44520;
short var_16 = (short)31055;
int zero = 0;
unsigned int var_17 = 3247205253U;
unsigned char var_18 = (unsigned char)180;
unsigned short var_19 = (unsigned short)18272;
void init() {
}

void checksum() {
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
