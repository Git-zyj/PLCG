#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1327523692611671586LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-20959;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 1513741607587230608LL;
unsigned long long int var_12 = 10181592269540859291ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
