#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-70;
unsigned long long int var_11 = 2457864816038924067ULL;
unsigned char var_13 = (unsigned char)68;
int var_15 = 676349698;
int zero = 0;
int var_16 = 681173171;
unsigned char var_17 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
