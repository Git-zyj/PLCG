#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 5032486414351568284ULL;
unsigned int var_4 = 2446087076U;
unsigned int var_5 = 2349374232U;
short var_6 = (short)-3132;
unsigned int var_8 = 2796376848U;
unsigned long long int var_9 = 9490124393618821692ULL;
int var_10 = 2119814610;
int zero = 0;
short var_11 = (short)17219;
long long int var_12 = -848103906282696815LL;
int var_13 = -516017250;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
