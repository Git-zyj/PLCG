#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14420449807003461384ULL;
signed char var_5 = (signed char)121;
unsigned char var_6 = (unsigned char)90;
long long int var_7 = -5229548662879834432LL;
unsigned char var_10 = (unsigned char)109;
long long int var_12 = -7773512331884841750LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12486800631866911188ULL;
unsigned long long int var_19 = 10587031234624536436ULL;
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
