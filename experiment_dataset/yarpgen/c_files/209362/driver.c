#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 37382820U;
long long int var_6 = 7323575171110484208LL;
unsigned int var_8 = 3632551642U;
unsigned long long int var_9 = 7258944411467803254ULL;
short var_10 = (short)1436;
int zero = 0;
unsigned char var_19 = (unsigned char)118;
_Bool var_20 = (_Bool)0;
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
