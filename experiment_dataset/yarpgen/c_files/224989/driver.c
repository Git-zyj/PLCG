#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)61;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2883708485U;
unsigned long long int var_6 = 17661278230623166630ULL;
unsigned long long int var_7 = 512570687467122103ULL;
unsigned long long int var_8 = 16316110771439364253ULL;
int var_9 = 1360213904;
int var_11 = 471378600;
int zero = 0;
long long int var_12 = -5470283929236924114LL;
signed char var_13 = (signed char)-96;
int var_14 = -189631776;
long long int var_15 = 6176495854454862965LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
