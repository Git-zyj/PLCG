#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
unsigned short var_3 = (unsigned short)29955;
long long int var_5 = -7669738169924539319LL;
unsigned int var_6 = 3794478766U;
unsigned short var_7 = (unsigned short)54752;
unsigned short var_9 = (unsigned short)48682;
signed char var_13 = (signed char)-64;
signed char var_15 = (signed char)-74;
int var_16 = 3474140;
int zero = 0;
signed char var_18 = (signed char)113;
signed char var_19 = (signed char)-108;
unsigned char var_20 = (unsigned char)40;
void init() {
}

void checksum() {
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
