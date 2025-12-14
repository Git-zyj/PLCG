#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)19;
int var_9 = -300940197;
_Bool var_10 = (_Bool)0;
unsigned char var_17 = (unsigned char)193;
unsigned long long int var_18 = 12317185965165593067ULL;
unsigned char var_19 = (unsigned char)112;
int zero = 0;
unsigned int var_20 = 2580560362U;
long long int var_21 = 3634847963280948969LL;
int var_22 = -1252716404;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
