#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -442642880;
unsigned char var_2 = (unsigned char)19;
long long int var_8 = -400422021369947986LL;
int var_9 = -1316449732;
unsigned char var_15 = (unsigned char)208;
int var_16 = -1386031646;
int var_17 = 1528464085;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 422907615U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
