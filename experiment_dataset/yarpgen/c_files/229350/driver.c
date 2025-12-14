#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)40;
unsigned long long int var_7 = 2377553540086918539ULL;
unsigned short var_9 = (unsigned short)49001;
unsigned short var_11 = (unsigned short)6763;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)2897;
long long int var_17 = -3441606575977117721LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 2139520495;
unsigned short var_20 = (unsigned short)7827;
int var_21 = -198510701;
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
