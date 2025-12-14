#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26959;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)-38;
unsigned char var_13 = (unsigned char)181;
unsigned long long int var_15 = 1114335039465709233ULL;
unsigned int var_16 = 2977725540U;
short var_17 = (short)27203;
int zero = 0;
int var_18 = -1611497118;
long long int var_19 = -2562872716490534110LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
