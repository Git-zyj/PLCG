#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
int var_2 = 1857331063;
long long int var_6 = 7431803532162485646LL;
unsigned short var_11 = (unsigned short)14099;
unsigned char var_13 = (unsigned char)165;
int var_15 = -730132464;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 995753541;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
