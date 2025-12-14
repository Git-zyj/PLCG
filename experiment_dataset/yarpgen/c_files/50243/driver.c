#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
unsigned short var_3 = (unsigned short)63961;
long long int var_7 = 4025763092835410017LL;
signed char var_10 = (signed char)-17;
int zero = 0;
signed char var_12 = (signed char)61;
signed char var_13 = (signed char)-97;
short var_14 = (short)26356;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
