#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)88;
unsigned short var_3 = (unsigned short)25943;
unsigned char var_5 = (unsigned char)142;
long long int var_6 = 703072337068153384LL;
short var_7 = (short)-22154;
unsigned short var_9 = (unsigned short)22683;
long long int var_11 = 3182775993355809966LL;
int zero = 0;
int var_15 = 678856069;
long long int var_16 = -5022078879129267241LL;
signed char var_17 = (signed char)-71;
unsigned char var_18 = (unsigned char)57;
unsigned short var_19 = (unsigned short)13816;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
