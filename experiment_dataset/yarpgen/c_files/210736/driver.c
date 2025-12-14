#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)31;
unsigned short var_5 = (unsigned short)33255;
long long int var_9 = -5289541407877065758LL;
unsigned short var_10 = (unsigned short)4920;
int zero = 0;
unsigned char var_12 = (unsigned char)195;
unsigned long long int var_13 = 12527699585583148408ULL;
unsigned short var_14 = (unsigned short)57514;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
