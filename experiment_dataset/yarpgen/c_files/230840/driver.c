#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-5634;
unsigned long long int var_8 = 5428563367403589924ULL;
unsigned long long int var_9 = 1118285174855460320ULL;
int zero = 0;
unsigned long long int var_12 = 17266397999001086336ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13831664553168817860ULL;
void init() {
}

void checksum() {
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
