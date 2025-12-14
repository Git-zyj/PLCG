#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29469;
unsigned long long int var_2 = 13946500260078935380ULL;
signed char var_4 = (signed char)-21;
unsigned char var_6 = (unsigned char)155;
int var_7 = 289536975;
unsigned char var_9 = (unsigned char)217;
long long int var_12 = -7414586166297798367LL;
int zero = 0;
int var_13 = -1655695316;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
