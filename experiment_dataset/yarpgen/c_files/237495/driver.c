#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16462334505449383610ULL;
unsigned long long int var_7 = 4281194304818693061ULL;
unsigned char var_8 = (unsigned char)219;
unsigned long long int var_11 = 4041564239070357341ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_17 = 1581204205;
unsigned char var_18 = (unsigned char)9;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
