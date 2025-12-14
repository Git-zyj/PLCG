#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 387688546U;
unsigned int var_3 = 855616068U;
long long int var_7 = 3465086749063928972LL;
_Bool var_8 = (_Bool)1;
long long int var_10 = 7228102887845922844LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)24307;
long long int var_17 = 4627336722418767165LL;
unsigned long long int var_18 = 1068350654488816710ULL;
int var_19 = -862822410;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
