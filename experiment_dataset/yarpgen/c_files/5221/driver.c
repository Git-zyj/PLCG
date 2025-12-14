#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 893283212022068366LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)247;
_Bool var_8 = (_Bool)1;
short var_9 = (short)5894;
short var_12 = (short)8044;
unsigned char var_15 = (unsigned char)226;
int zero = 0;
unsigned long long int var_19 = 1561432450464711964ULL;
unsigned long long int var_20 = 3293024439453375931ULL;
unsigned char var_21 = (unsigned char)151;
unsigned char var_22 = (unsigned char)241;
short var_23 = (short)28090;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
