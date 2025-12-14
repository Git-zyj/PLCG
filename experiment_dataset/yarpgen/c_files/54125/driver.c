#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1925552361829064861ULL;
long long int var_3 = 514080190701183101LL;
unsigned char var_5 = (unsigned char)11;
unsigned short var_6 = (unsigned short)3831;
unsigned int var_7 = 97363054U;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -1178939660;
unsigned long long int var_11 = 16152976861409781633ULL;
unsigned short var_12 = (unsigned short)21220;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
