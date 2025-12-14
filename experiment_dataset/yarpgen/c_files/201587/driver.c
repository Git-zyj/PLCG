#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
long long int var_5 = -7404993847293142398LL;
long long int var_11 = 6278525825525969045LL;
short var_13 = (short)10257;
int zero = 0;
signed char var_18 = (signed char)82;
unsigned long long int var_19 = 17035713033172021508ULL;
unsigned long long int var_20 = 11243870184324420977ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
