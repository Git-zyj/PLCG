#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 671830088156926261LL;
unsigned int var_7 = 189706627U;
unsigned char var_8 = (unsigned char)83;
unsigned short var_9 = (unsigned short)39245;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14586757084252341383ULL;
unsigned char var_19 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
