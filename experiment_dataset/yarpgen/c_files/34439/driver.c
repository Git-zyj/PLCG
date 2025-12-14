#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15272;
long long int var_1 = -4260061020868261409LL;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-28655;
long long int var_14 = -6219537139459240766LL;
unsigned long long int var_15 = 6034819600152423682ULL;
int zero = 0;
long long int var_16 = -720108813858806855LL;
int var_17 = 674959523;
long long int var_18 = -8155661669163419646LL;
void init() {
}

void checksum() {
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
