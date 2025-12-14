#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)19;
unsigned short var_5 = (unsigned short)56623;
unsigned char var_7 = (unsigned char)241;
unsigned int var_10 = 3707128397U;
signed char var_12 = (signed char)19;
unsigned int var_18 = 1594026251U;
unsigned int var_19 = 1176666396U;
int zero = 0;
unsigned char var_20 = (unsigned char)118;
long long int var_21 = 8705444863425845786LL;
unsigned int var_22 = 627380272U;
void init() {
}

void checksum() {
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
