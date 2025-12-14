#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1665115387564576248LL;
short var_8 = (short)19489;
unsigned long long int var_13 = 3053902595120489239ULL;
short var_14 = (short)8858;
int zero = 0;
unsigned long long int var_18 = 3938922328059277010ULL;
unsigned int var_19 = 4122515602U;
unsigned char var_20 = (unsigned char)148;
short var_21 = (short)-9768;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
