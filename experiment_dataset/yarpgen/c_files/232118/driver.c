#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7999047689427415347ULL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)26679;
unsigned long long int var_12 = 11227363938101004914ULL;
unsigned long long int var_13 = 3413255412411674283ULL;
unsigned short var_14 = (unsigned short)40213;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
