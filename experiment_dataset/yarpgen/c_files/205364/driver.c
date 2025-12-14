#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -35493306;
long long int var_3 = 1564770009354214631LL;
int var_4 = 2063918179;
short var_5 = (short)16200;
unsigned long long int var_6 = 13200693289048656891ULL;
long long int var_8 = -7210667489269847416LL;
int var_9 = 1423686042;
int zero = 0;
unsigned long long int var_11 = 252200474913285115ULL;
long long int var_12 = 3956245454093558729LL;
int var_13 = -707688280;
unsigned short var_14 = (unsigned short)55363;
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
