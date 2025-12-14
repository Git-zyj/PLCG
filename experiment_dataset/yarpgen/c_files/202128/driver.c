#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-24674;
unsigned char var_9 = (unsigned char)225;
int zero = 0;
unsigned long long int var_10 = 8214497586167418955ULL;
unsigned long long int var_11 = 6308513241519369015ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
