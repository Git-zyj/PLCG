#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3675267131098424309LL;
long long int var_3 = 8390741792679037041LL;
short var_6 = (short)-4666;
unsigned int var_8 = 396442104U;
_Bool var_14 = (_Bool)1;
long long int var_18 = 1126919136655551960LL;
int zero = 0;
signed char var_19 = (signed char)121;
unsigned char var_20 = (unsigned char)80;
short var_21 = (short)-28851;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
