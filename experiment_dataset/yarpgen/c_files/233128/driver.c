#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10737509016937860502ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6316184339697171034ULL;
unsigned long long int var_11 = 11203483949289317574ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11600637628475115434ULL;
void init() {
}

void checksum() {
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
