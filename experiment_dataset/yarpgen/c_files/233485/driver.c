#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5315449436647643057ULL;
unsigned short var_4 = (unsigned short)44255;
int var_9 = -2001801352;
int var_15 = -200218798;
int var_17 = -1799177479;
int zero = 0;
int var_19 = 979509797;
long long int var_20 = -8955897489857053054LL;
void init() {
}

void checksum() {
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
