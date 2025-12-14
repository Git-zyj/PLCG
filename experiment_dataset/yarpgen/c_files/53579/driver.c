#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
signed char var_3 = (signed char)21;
unsigned long long int var_4 = 12305435960905796902ULL;
unsigned int var_6 = 2999193950U;
unsigned int var_12 = 2707145731U;
int var_13 = -1075488230;
int var_16 = -639543634;
unsigned long long int var_19 = 12788963868598629653ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)20462;
unsigned long long int var_21 = 16731643590517030438ULL;
int var_22 = -719182611;
unsigned char var_23 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
