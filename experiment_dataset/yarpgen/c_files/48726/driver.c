#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2037893976;
signed char var_2 = (signed char)56;
unsigned long long int var_3 = 9902357885201179333ULL;
int var_4 = -389762758;
int var_5 = 137670649;
unsigned long long int var_6 = 362076538684167831ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)70;
unsigned int var_11 = 1549835999U;
short var_12 = (short)-6617;
unsigned char var_13 = (unsigned char)175;
unsigned long long int var_14 = 12365652904152701071ULL;
int zero = 0;
long long int var_16 = 3477164533653205615LL;
int var_17 = 1057413488;
unsigned int var_18 = 3209248352U;
int var_19 = 1924624975;
long long int var_20 = 4913681019612531323LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
