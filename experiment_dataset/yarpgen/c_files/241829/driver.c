#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50448;
_Bool var_9 = (_Bool)1;
long long int var_12 = 2735019156000237222LL;
_Bool var_15 = (_Bool)1;
int var_16 = -1060142388;
int zero = 0;
long long int var_18 = 3220277775960413311LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)21895;
void init() {
}

void checksum() {
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
