#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned int var_2 = 677094156U;
long long int var_3 = -7146347808082960293LL;
signed char var_5 = (signed char)-37;
long long int var_7 = -8228231881732970724LL;
unsigned short var_8 = (unsigned short)34727;
unsigned char var_9 = (unsigned char)210;
int zero = 0;
signed char var_13 = (signed char)-1;
unsigned short var_14 = (unsigned short)39368;
unsigned long long int var_15 = 17459989787750464227ULL;
unsigned char var_16 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
