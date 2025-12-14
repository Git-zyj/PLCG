#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1878;
unsigned char var_6 = (unsigned char)113;
unsigned short var_7 = (unsigned short)9646;
_Bool var_10 = (_Bool)0;
long long int var_11 = 2372801435186224321LL;
unsigned short var_12 = (unsigned short)41803;
long long int var_14 = -5980303361629545166LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)121;
unsigned int var_18 = 2201870595U;
void init() {
}

void checksum() {
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
