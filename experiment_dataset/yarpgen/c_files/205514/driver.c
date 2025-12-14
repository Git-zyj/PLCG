#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6247314762567135863LL;
int var_2 = -1572363510;
unsigned char var_4 = (unsigned char)98;
unsigned long long int var_5 = 16469541886741919284ULL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)14503;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)12566;
unsigned int var_20 = 2683322983U;
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
