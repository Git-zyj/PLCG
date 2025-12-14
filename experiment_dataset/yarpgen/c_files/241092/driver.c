#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6194673734460987517ULL;
unsigned int var_3 = 4061904061U;
long long int var_5 = 3686332700347298215LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)134;
unsigned char var_10 = (unsigned char)176;
int zero = 0;
unsigned long long int var_12 = 4299383518917029263ULL;
int var_13 = 1078869791;
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
