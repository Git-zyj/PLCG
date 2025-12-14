#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5598816744567412197LL;
int var_4 = -661745619;
int var_6 = -1040010929;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6233550055511484358LL;
int zero = 0;
long long int var_14 = 4217383126962746811LL;
unsigned int var_15 = 1042860833U;
short var_16 = (short)-8973;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
