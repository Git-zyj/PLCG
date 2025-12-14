#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)12;
long long int var_7 = -3434941347352754214LL;
short var_8 = (short)16164;
long long int var_9 = -6689060084567416651LL;
long long int var_12 = 675131871866744305LL;
_Bool var_13 = (_Bool)0;
short var_15 = (short)8677;
int zero = 0;
unsigned short var_17 = (unsigned short)18000;
int var_18 = 1600484172;
short var_19 = (short)-29883;
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
