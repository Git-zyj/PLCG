#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23673;
unsigned long long int var_5 = 4046744623582831932ULL;
short var_8 = (short)-28216;
int zero = 0;
unsigned short var_20 = (unsigned short)12818;
unsigned short var_21 = (unsigned short)40014;
unsigned long long int var_22 = 10974503164024637226ULL;
_Bool var_23 = (_Bool)1;
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
