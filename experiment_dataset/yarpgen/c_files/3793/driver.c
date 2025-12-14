#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55796;
int var_6 = 1406530573;
unsigned short var_8 = (unsigned short)38342;
int var_15 = -1562539577;
int zero = 0;
unsigned long long int var_17 = 15889289274261950641ULL;
signed char var_18 = (signed char)-35;
unsigned char var_19 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
