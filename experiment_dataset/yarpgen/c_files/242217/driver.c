#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10121;
_Bool var_3 = (_Bool)1;
int var_4 = 608392430;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = -749812182;
long long int var_9 = -389485305442701957LL;
int zero = 0;
signed char var_11 = (signed char)-67;
long long int var_12 = -8882554716324592047LL;
int var_13 = -320973032;
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
