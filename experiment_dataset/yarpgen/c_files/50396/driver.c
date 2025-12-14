#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3553269332389612389LL;
unsigned short var_2 = (unsigned short)63861;
unsigned int var_3 = 242761753U;
int var_4 = -2041106442;
long long int var_5 = -1682482854395282781LL;
unsigned int var_6 = 571654352U;
int var_9 = 1240586714;
unsigned long long int var_11 = 13161855184323084388ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)7600;
unsigned char var_15 = (unsigned char)207;
signed char var_16 = (signed char)59;
void init() {
}

void checksum() {
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
