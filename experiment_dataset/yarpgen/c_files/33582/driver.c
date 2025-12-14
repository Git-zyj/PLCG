#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1445258229531036387LL;
unsigned short var_1 = (unsigned short)55507;
long long int var_2 = 3062091803132105386LL;
_Bool var_3 = (_Bool)1;
int var_4 = -1676349832;
unsigned int var_5 = 3550157416U;
int var_7 = -914204337;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = 5592152638333882137LL;
long long int var_11 = -8639852541097222787LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
