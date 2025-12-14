#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6207856401379727075LL;
long long int var_1 = -3444531694287934704LL;
unsigned char var_2 = (unsigned char)200;
unsigned char var_3 = (unsigned char)214;
long long int var_4 = 8935207157082905826LL;
unsigned int var_5 = 1865988458U;
unsigned short var_6 = (unsigned short)25821;
signed char var_7 = (signed char)-105;
unsigned char var_8 = (unsigned char)113;
long long int var_9 = -646921146316564080LL;
unsigned int var_10 = 1314598050U;
int zero = 0;
int var_11 = -547263019;
long long int var_12 = 3375222004264171633LL;
int var_13 = 443435835;
long long int var_14 = -1762994356978574699LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
