#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39092;
int var_3 = 916343617;
unsigned char var_8 = (unsigned char)154;
signed char var_9 = (signed char)-44;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6317253011139251225ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)21805;
unsigned long long int var_16 = 9500853801612960650ULL;
void init() {
}

void checksum() {
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
