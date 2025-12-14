#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7121703340100005889LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 7925377824474224298ULL;
long long int var_4 = -8224625329562604823LL;
long long int var_5 = -4464061265045203149LL;
int var_6 = 362275808;
int var_7 = -1977065884;
int var_9 = 49083256;
int var_10 = 262710011;
int zero = 0;
unsigned long long int var_11 = 10450605708387551378ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
