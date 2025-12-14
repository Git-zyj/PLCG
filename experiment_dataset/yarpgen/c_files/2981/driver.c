#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -9200400193858895678LL;
unsigned long long int var_6 = 13094911204084076111ULL;
unsigned char var_8 = (unsigned char)231;
_Bool var_9 = (_Bool)1;
int var_10 = 570292431;
unsigned char var_11 = (unsigned char)70;
unsigned int var_13 = 1198490133U;
int zero = 0;
unsigned short var_14 = (unsigned short)60369;
unsigned long long int var_15 = 11602558714592349713ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
