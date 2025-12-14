#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12945845524769321252ULL;
unsigned short var_1 = (unsigned short)62723;
unsigned char var_3 = (unsigned char)171;
unsigned int var_6 = 811489867U;
short var_7 = (short)18160;
unsigned long long int var_8 = 7244651258792724106ULL;
unsigned int var_9 = 3980954708U;
int zero = 0;
short var_14 = (short)-23177;
unsigned char var_15 = (unsigned char)132;
signed char var_16 = (signed char)-12;
long long int var_17 = 807936472642267082LL;
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
