#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2765485676U;
unsigned int var_4 = 3690350684U;
long long int var_5 = -4000038184758952013LL;
_Bool var_7 = (_Bool)0;
int var_8 = -1988283313;
unsigned int var_9 = 2183210140U;
int zero = 0;
int var_11 = -1153785918;
unsigned long long int var_12 = 5368941628062977089ULL;
unsigned short var_13 = (unsigned short)44945;
unsigned int var_14 = 2856707898U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
