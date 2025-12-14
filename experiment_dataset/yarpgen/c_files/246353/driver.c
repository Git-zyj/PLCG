#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
short var_3 = (short)8069;
short var_7 = (short)-24742;
unsigned long long int var_11 = 12403665333023649581ULL;
int zero = 0;
int var_12 = 1244796786;
unsigned long long int var_13 = 1535146509359442808ULL;
unsigned short var_14 = (unsigned short)20877;
signed char var_15 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
