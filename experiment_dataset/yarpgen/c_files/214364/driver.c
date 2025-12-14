#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 621923659U;
long long int var_2 = -6830742151505723170LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 8513412633232923422ULL;
unsigned long long int var_9 = 7394898639334365255ULL;
unsigned short var_10 = (unsigned short)32617;
int zero = 0;
unsigned long long int var_11 = 9803199580723027220ULL;
int var_12 = 648688422;
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
