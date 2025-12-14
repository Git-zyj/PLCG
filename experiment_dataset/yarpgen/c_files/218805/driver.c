#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7586180887221149539ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)7;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13128234924027089521ULL;
void init() {
}

void checksum() {
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
