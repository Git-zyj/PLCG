#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1080222623;
unsigned char var_2 = (unsigned char)15;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)35;
int zero = 0;
long long int var_15 = -3288216906645850499LL;
long long int var_16 = -5402643833895797351LL;
unsigned short var_17 = (unsigned short)12406;
unsigned short var_18 = (unsigned short)64284;
unsigned int var_19 = 101853083U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
