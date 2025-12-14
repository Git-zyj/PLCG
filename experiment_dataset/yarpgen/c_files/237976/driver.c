#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8028177487782991580LL;
unsigned long long int var_1 = 1225323779539347897ULL;
unsigned int var_2 = 2425992397U;
unsigned char var_5 = (unsigned char)117;
unsigned long long int var_9 = 2215439682522617834ULL;
long long int var_11 = 8664822137941040811LL;
unsigned long long int var_12 = 9782533078785446251ULL;
long long int var_14 = -508025693097037478LL;
long long int var_17 = 3078063159065574596LL;
int zero = 0;
int var_19 = -1480338789;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)76;
unsigned char var_22 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
