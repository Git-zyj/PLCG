#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -83004445;
short var_4 = (short)-5464;
long long int var_5 = -6590142529326667090LL;
unsigned int var_6 = 3165680826U;
long long int var_15 = -5360223908003985171LL;
short var_18 = (short)-31930;
int zero = 0;
int var_19 = 1359709700;
int var_20 = 1673763175;
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
