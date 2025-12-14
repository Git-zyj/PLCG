#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-78;
long long int var_4 = -3502573293999388642LL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-47;
int var_11 = 102022312;
int zero = 0;
unsigned short var_12 = (unsigned short)48154;
int var_13 = 1085462527;
long long int var_14 = 7828494237861636118LL;
long long int var_15 = -1614219596601394203LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
