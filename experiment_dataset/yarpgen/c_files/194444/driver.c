#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 18063028411709063953ULL;
signed char var_6 = (signed char)-44;
unsigned long long int var_8 = 345922602058825062ULL;
int var_9 = 1415408488;
int var_17 = 1993112339;
int zero = 0;
unsigned char var_18 = (unsigned char)45;
signed char var_19 = (signed char)45;
long long int var_20 = 8353495739297887552LL;
short var_21 = (short)21404;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
