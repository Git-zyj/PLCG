#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 729403666;
unsigned short var_8 = (unsigned short)41767;
unsigned long long int var_13 = 17954726501803966281ULL;
int zero = 0;
unsigned long long int var_17 = 7448517808505581193ULL;
short var_18 = (short)21566;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
