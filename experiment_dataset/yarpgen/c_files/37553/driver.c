#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7186325856939354735LL;
long long int var_1 = 2425311771267697916LL;
unsigned char var_2 = (unsigned char)38;
unsigned short var_4 = (unsigned short)39762;
_Bool var_8 = (_Bool)0;
long long int var_9 = 1272818854258727137LL;
int zero = 0;
unsigned long long int var_14 = 13308812795684052282ULL;
int var_15 = 907944367;
void init() {
}

void checksum() {
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
