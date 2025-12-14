#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6443382196395682899LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)31264;
long long int var_5 = 2533911726776245798LL;
_Bool var_6 = (_Bool)1;
long long int var_9 = 8330198020573655883LL;
int zero = 0;
long long int var_11 = -7181723366470190782LL;
unsigned short var_12 = (unsigned short)42337;
void init() {
}

void checksum() {
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
