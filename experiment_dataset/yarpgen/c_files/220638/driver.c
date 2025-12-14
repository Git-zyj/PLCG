#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)49670;
unsigned char var_7 = (unsigned char)210;
unsigned short var_8 = (unsigned short)21340;
long long int var_10 = -4177295115907319987LL;
int var_11 = 155611518;
short var_12 = (short)30030;
signed char var_16 = (signed char)-125;
int zero = 0;
unsigned char var_19 = (unsigned char)210;
int var_20 = -725879543;
int var_21 = -2147231331;
unsigned short var_22 = (unsigned short)23683;
void init() {
}

void checksum() {
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
