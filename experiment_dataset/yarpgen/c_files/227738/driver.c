#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33039;
int var_7 = 294831866;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)157;
unsigned int var_14 = 4294289945U;
unsigned short var_17 = (unsigned short)58039;
int zero = 0;
unsigned long long int var_18 = 17480252216059855560ULL;
int var_19 = -1884160180;
unsigned long long int var_20 = 9053789028772503314ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
