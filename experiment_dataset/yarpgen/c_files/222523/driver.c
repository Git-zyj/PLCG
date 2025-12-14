#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6857861475045960333LL;
unsigned char var_4 = (unsigned char)166;
unsigned long long int var_6 = 2190875502924087860ULL;
short var_7 = (short)-3442;
unsigned short var_8 = (unsigned short)29255;
short var_9 = (short)14974;
signed char var_10 = (signed char)-44;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 984605435U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
