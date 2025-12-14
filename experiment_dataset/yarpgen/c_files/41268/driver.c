#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3624139280116600392LL;
unsigned char var_7 = (unsigned char)7;
signed char var_9 = (signed char)30;
unsigned long long int var_14 = 14423743168046331003ULL;
unsigned short var_15 = (unsigned short)15682;
int zero = 0;
unsigned short var_16 = (unsigned short)22664;
unsigned short var_17 = (unsigned short)19758;
signed char var_18 = (signed char)-37;
void init() {
}

void checksum() {
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
