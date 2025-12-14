#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
int var_2 = -37473808;
unsigned long long int var_5 = 14767012333717720315ULL;
unsigned long long int var_7 = 11072411712141076545ULL;
unsigned char var_8 = (unsigned char)209;
unsigned char var_9 = (unsigned char)251;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 4319531512302745599ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)11585;
int var_14 = -1032270716;
signed char var_15 = (signed char)-56;
void init() {
}

void checksum() {
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
