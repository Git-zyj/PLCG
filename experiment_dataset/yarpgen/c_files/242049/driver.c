#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6104904635111251465LL;
int var_4 = 2064270500;
unsigned short var_9 = (unsigned short)30423;
unsigned long long int var_10 = 4343405126592403011ULL;
long long int var_13 = -8953472611293856245LL;
unsigned short var_18 = (unsigned short)4319;
int zero = 0;
signed char var_19 = (signed char)58;
unsigned long long int var_20 = 6775216887059973943ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
