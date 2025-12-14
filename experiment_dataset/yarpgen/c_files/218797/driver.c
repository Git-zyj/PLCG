#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1254386002U;
int var_3 = 747835765;
unsigned int var_10 = 24730427U;
short var_13 = (short)9495;
signed char var_14 = (signed char)-3;
int zero = 0;
signed char var_18 = (signed char)-28;
long long int var_19 = 3681424574783509995LL;
short var_20 = (short)28320;
unsigned char var_21 = (unsigned char)98;
signed char var_22 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
