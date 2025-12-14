#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)4094;
unsigned char var_8 = (unsigned char)182;
unsigned short var_15 = (unsigned short)8555;
long long int var_18 = -6718910263977216889LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12676018655561883133ULL;
unsigned long long int var_21 = 3995436357722083694ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
