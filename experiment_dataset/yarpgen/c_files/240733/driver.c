#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 494925819U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)7753;
unsigned int var_4 = 4234103029U;
long long int var_7 = 542391065128668677LL;
int var_9 = 1227858869;
int zero = 0;
short var_13 = (short)-3707;
unsigned short var_14 = (unsigned short)7178;
unsigned int var_15 = 2894456735U;
void init() {
}

void checksum() {
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
