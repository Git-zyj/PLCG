#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8365384137158811009LL;
signed char var_6 = (signed char)118;
unsigned int var_7 = 2711821939U;
long long int var_8 = 6173250181808073914LL;
unsigned char var_10 = (unsigned char)153;
unsigned char var_12 = (unsigned char)66;
unsigned int var_14 = 2982877347U;
int zero = 0;
unsigned long long int var_15 = 14273209638119766785ULL;
unsigned int var_16 = 4118494088U;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3855844894380528699LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
