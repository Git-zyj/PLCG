#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 793370263U;
signed char var_2 = (signed char)2;
long long int var_3 = 9197635874999551258LL;
long long int var_4 = -8144920428985681057LL;
long long int var_5 = 5665622987685914890LL;
unsigned short var_7 = (unsigned short)19839;
long long int var_10 = 6877141290239697999LL;
int zero = 0;
unsigned short var_13 = (unsigned short)29194;
unsigned short var_14 = (unsigned short)27879;
long long int var_15 = -248116740418309181LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
