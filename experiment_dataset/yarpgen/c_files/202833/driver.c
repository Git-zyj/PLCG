#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6853123979973747365ULL;
int var_2 = 351218592;
int var_5 = -354780571;
unsigned long long int var_7 = 12752845318703639586ULL;
int var_11 = 498161363;
unsigned long long int var_13 = 6149090882483364601ULL;
unsigned long long int var_14 = 7014231404588937037ULL;
int zero = 0;
int var_16 = 637069675;
short var_17 = (short)26791;
_Bool var_18 = (_Bool)0;
short var_19 = (short)10432;
void init() {
}

void checksum() {
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
