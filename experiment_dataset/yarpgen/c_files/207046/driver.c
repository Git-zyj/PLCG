#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8482594702161920753LL;
unsigned short var_7 = (unsigned short)31790;
long long int var_8 = -4742477757956519831LL;
unsigned int var_9 = 414220456U;
unsigned short var_11 = (unsigned short)31460;
signed char var_13 = (signed char)83;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-70;
unsigned short var_18 = (unsigned short)16012;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
