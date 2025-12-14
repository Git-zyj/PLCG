#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52676;
int var_4 = 1855513767;
signed char var_8 = (signed char)-51;
unsigned int var_9 = 2232779911U;
signed char var_10 = (signed char)-67;
short var_11 = (short)3278;
int zero = 0;
unsigned int var_12 = 1879182427U;
unsigned int var_13 = 3778537520U;
unsigned short var_14 = (unsigned short)9752;
long long int var_15 = 7098517176546619760LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
