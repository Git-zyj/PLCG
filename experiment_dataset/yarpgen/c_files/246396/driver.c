#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -937672643;
long long int var_3 = 8186273389973885919LL;
long long int var_5 = -8490600292863984777LL;
signed char var_7 = (signed char)-45;
unsigned short var_8 = (unsigned short)10143;
signed char var_9 = (signed char)62;
unsigned char var_10 = (unsigned char)112;
int zero = 0;
signed char var_11 = (signed char)21;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)23713;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
