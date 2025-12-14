#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 206359370;
signed char var_8 = (signed char)-77;
int var_10 = -1379992556;
_Bool var_12 = (_Bool)1;
int var_14 = -757187102;
int zero = 0;
unsigned short var_16 = (unsigned short)55729;
unsigned long long int var_17 = 13462008057046201724ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
