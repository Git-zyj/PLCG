#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18627;
unsigned char var_3 = (unsigned char)94;
long long int var_5 = 6268629130458562264LL;
unsigned char var_9 = (unsigned char)94;
short var_13 = (short)13156;
signed char var_14 = (signed char)-16;
int zero = 0;
unsigned int var_16 = 3558048864U;
unsigned short var_17 = (unsigned short)56800;
unsigned short var_18 = (unsigned short)23098;
int var_19 = 2091459648;
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
