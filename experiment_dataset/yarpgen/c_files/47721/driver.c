#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)6973;
unsigned long long int var_6 = 4683509368422386830ULL;
long long int var_7 = -9020522943683258403LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 7922800834840140259ULL;
signed char var_12 = (signed char)-112;
unsigned char var_13 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
