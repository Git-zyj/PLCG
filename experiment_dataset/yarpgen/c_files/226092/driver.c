#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44655;
unsigned short var_2 = (unsigned short)31538;
long long int var_5 = 4329212640571654286LL;
signed char var_6 = (signed char)69;
unsigned short var_7 = (unsigned short)46586;
unsigned short var_12 = (unsigned short)44094;
short var_13 = (short)20860;
unsigned short var_16 = (unsigned short)12520;
signed char var_17 = (signed char)-54;
int zero = 0;
unsigned short var_18 = (unsigned short)27475;
unsigned short var_19 = (unsigned short)60335;
long long int var_20 = 3552626685276404256LL;
short var_21 = (short)-7062;
unsigned short var_22 = (unsigned short)5443;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
