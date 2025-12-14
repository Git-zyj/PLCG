#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64967;
unsigned char var_3 = (unsigned char)71;
long long int var_5 = -4016283827720180323LL;
unsigned short var_9 = (unsigned short)49273;
unsigned int var_11 = 1339974248U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 2348360933038973318ULL;
signed char var_17 = (signed char)4;
unsigned int var_18 = 2048022601U;
unsigned int var_19 = 2294547085U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
