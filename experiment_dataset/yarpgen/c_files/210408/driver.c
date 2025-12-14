#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5742982973468881680LL;
unsigned long long int var_5 = 5187293325369285549ULL;
unsigned short var_12 = (unsigned short)49628;
unsigned long long int var_13 = 3538245529483317950ULL;
unsigned long long int var_16 = 14322862582324608127ULL;
unsigned long long int var_17 = 7339850533282606942ULL;
int zero = 0;
unsigned long long int var_20 = 3165377911435789183ULL;
short var_21 = (short)-24060;
unsigned int var_22 = 453906604U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
