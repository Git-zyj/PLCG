#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1744727593575788593LL;
signed char var_1 = (signed char)-4;
unsigned short var_3 = (unsigned short)43987;
unsigned char var_4 = (unsigned char)241;
long long int var_5 = 8062655055414135074LL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)220;
unsigned short var_11 = (unsigned short)54327;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_15 = -2898600212390072329LL;
unsigned short var_16 = (unsigned short)50978;
long long int var_17 = 4923890382540126637LL;
void init() {
}

void checksum() {
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
