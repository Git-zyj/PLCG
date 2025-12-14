#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -201157537635794477LL;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 4401901626428648556ULL;
short var_6 = (short)1316;
unsigned short var_7 = (unsigned short)28273;
unsigned long long int var_9 = 14401978504986271378ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)14986;
unsigned short var_11 = (unsigned short)60634;
short var_12 = (short)-8219;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
