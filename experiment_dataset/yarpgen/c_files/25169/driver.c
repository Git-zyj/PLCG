#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20951;
unsigned int var_1 = 3669203885U;
short var_2 = (short)11533;
unsigned int var_3 = 556049476U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)58;
unsigned short var_6 = (unsigned short)34608;
long long int var_7 = 5912507360141289542LL;
unsigned int var_8 = 2469265699U;
short var_9 = (short)9676;
unsigned int var_10 = 3100343224U;
unsigned char var_11 = (unsigned char)137;
unsigned short var_12 = (unsigned short)35707;
unsigned char var_13 = (unsigned char)226;
int zero = 0;
signed char var_15 = (signed char)-16;
signed char var_16 = (signed char)107;
unsigned char var_17 = (unsigned char)52;
unsigned short var_18 = (unsigned short)6028;
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
