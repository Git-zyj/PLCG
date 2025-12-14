#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_5 = (unsigned char)162;
unsigned long long int var_6 = 4716583083744677026ULL;
unsigned short var_7 = (unsigned short)21031;
unsigned long long int var_9 = 1182380235691749875ULL;
int zero = 0;
unsigned long long int var_15 = 18229370176024552558ULL;
long long int var_16 = 5635215370330798204LL;
unsigned short var_17 = (unsigned short)37964;
unsigned char var_18 = (unsigned char)118;
unsigned short var_19 = (unsigned short)43512;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
