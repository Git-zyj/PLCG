#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2200436646493696057ULL;
unsigned long long int var_3 = 13949249973879567475ULL;
unsigned short var_6 = (unsigned short)62875;
unsigned long long int var_7 = 7604525853301605055ULL;
int zero = 0;
int var_10 = 1428571845;
unsigned long long int var_11 = 7395064686843099387ULL;
int var_12 = 245062738;
unsigned long long int var_13 = 7279281792964807787ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
