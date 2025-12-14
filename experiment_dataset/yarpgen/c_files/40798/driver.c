#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11762145417836687790ULL;
unsigned short var_7 = (unsigned short)64020;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = -1984461615;
int zero = 0;
long long int var_13 = -8012890370879536301LL;
unsigned long long int var_14 = 9871194969624535016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
