#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)157;
int var_2 = 1879950389;
short var_3 = (short)32410;
int var_4 = -839696984;
unsigned char var_5 = (unsigned char)228;
unsigned long long int var_8 = 1915322300455641023ULL;
long long int var_10 = -3127847404138242037LL;
unsigned int var_13 = 1280875003U;
unsigned char var_14 = (unsigned char)140;
short var_18 = (short)17924;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
long long int var_22 = 284752543552148212LL;
signed char var_23 = (signed char)-64;
unsigned int var_24 = 3258399264U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
