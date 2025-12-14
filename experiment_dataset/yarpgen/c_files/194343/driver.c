#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1333931373;
int var_3 = -1142240612;
int var_5 = -1683691813;
unsigned char var_6 = (unsigned char)105;
long long int var_8 = 8668103192945414425LL;
int var_9 = -1442575773;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 3041120647U;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 4552119490118745945LL;
unsigned long long int var_17 = 17141746938911760438ULL;
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
