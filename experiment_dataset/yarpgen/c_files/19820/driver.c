#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned int var_5 = 2663523373U;
unsigned long long int var_6 = 799167569249031816ULL;
signed char var_8 = (signed char)-90;
unsigned long long int var_13 = 11075734985748916274ULL;
int zero = 0;
int var_14 = 789047417;
unsigned int var_15 = 966402193U;
unsigned char var_16 = (unsigned char)186;
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
