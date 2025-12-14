#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)124;
int var_4 = -1107673247;
signed char var_7 = (signed char)-105;
short var_13 = (short)-21660;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)-27152;
unsigned char var_20 = (unsigned char)38;
signed char var_21 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
