#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36357;
unsigned short var_1 = (unsigned short)13291;
long long int var_4 = 4274375121065613574LL;
signed char var_6 = (signed char)-110;
signed char var_7 = (signed char)-52;
signed char var_10 = (signed char)78;
short var_13 = (short)-22884;
int zero = 0;
unsigned int var_14 = 3494268334U;
unsigned short var_15 = (unsigned short)32088;
unsigned char var_16 = (unsigned char)190;
short var_17 = (short)22424;
unsigned int var_18 = 3137845762U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
