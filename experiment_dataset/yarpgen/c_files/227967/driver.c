#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8339976430063723062LL;
long long int var_4 = 3410040808794198645LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-13277;
unsigned char var_8 = (unsigned char)101;
long long int var_9 = 1954267199926625709LL;
long long int var_10 = -3261139038094522335LL;
int var_12 = -268318088;
int zero = 0;
signed char var_14 = (signed char)46;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)107;
unsigned char var_17 = (unsigned char)155;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
