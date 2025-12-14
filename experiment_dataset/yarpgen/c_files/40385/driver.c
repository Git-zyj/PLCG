#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4550702292431229666ULL;
long long int var_3 = -7301192341443090704LL;
unsigned short var_4 = (unsigned short)57381;
unsigned char var_5 = (unsigned char)79;
signed char var_6 = (signed char)-17;
long long int var_9 = 352019809866772862LL;
int zero = 0;
long long int var_16 = -1179317104476807252LL;
int var_17 = -1150551327;
short var_18 = (short)-16342;
unsigned short var_19 = (unsigned short)50738;
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
