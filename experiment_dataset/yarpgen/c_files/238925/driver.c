#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1742115101;
signed char var_3 = (signed char)-126;
signed char var_5 = (signed char)-76;
unsigned char var_6 = (unsigned char)162;
unsigned long long int var_7 = 12144136845075846947ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_11 = (short)-102;
int var_12 = 1991519500;
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
