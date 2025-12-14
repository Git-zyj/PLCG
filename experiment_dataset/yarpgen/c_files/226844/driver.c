#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)201;
int var_5 = -1984021;
int var_9 = 78265925;
long long int var_12 = -2861154244822564076LL;
_Bool var_13 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 11396647052981476054ULL;
unsigned long long int var_21 = 2005152996051373572ULL;
unsigned char var_22 = (unsigned char)106;
unsigned long long int var_23 = 18039420150033632310ULL;
int var_24 = 613208873;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
