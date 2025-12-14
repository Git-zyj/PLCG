#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7981255592958602610LL;
short var_9 = (short)22022;
unsigned char var_15 = (unsigned char)133;
int zero = 0;
short var_17 = (short)20294;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)15518;
short var_20 = (short)8820;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
